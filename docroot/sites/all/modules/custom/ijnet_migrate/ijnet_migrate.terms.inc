<?php

function _ijnet_migrate_register_term_migrations($connection_args) {
  $machine_name = 'Region';
  Migration::registerMigration('DrupalTerm6Migration', $machine_name,
    $connection_args + array(
      'group_name' => 'TermsLegacyToDrupal7',
      'description' => t('Migration of Region terms.'),
      'machine_name' => $machine_name,
      'source_vocabulary' => '3',
      'destination_vocabulary' => 'region',
    )
  );

  $machine_name = 'Topic';
  Migration::registerMigration('TermTopicMigration', $machine_name,
    $connection_args + array(
      'group_name' => 'TermsLegacyToDrupal7',
      'description' => t('Migration of Topic terms'),
      'machine_name' => $machine_name,
      'source_vocabulary' => '1',
      'destination_vocabulary' => 'topic',
      // There are terms with equal name but different language
      'allow_duplicate_terms' => TRUE,
    )
  );

  $machine_name = 'Tags';
  Migration::registerMigration('TermTagsMigration', $machine_name,
    $connection_args + array(
      'group_name' => 'TermsLegacyToDrupal7',
      'description' => t('Migration of Tags terms.'),
      'machine_name' => $machine_name,
      'source_vocabulary' => '1',
      'destination_vocabulary' => 'tags',
      // There are terms with equal name but different language
      'allow_duplicate_terms' => TRUE,
    )
  );
}

/* We use this class just to add two destination fields */
class i18nMigrateDestinationTerm extends MigrateDestinationTerm {
  public function fields($migration = NULL) {
    $fields = parent::fields($migration);
    if ( function_exists('i18n_taxonomy_vocabulary_mode') ) {
      $fields['language'] = t('Term: Language');
      $fields['i18n_tsid'] = t('Term: Language group');
    }
    return $fields;
  }
}

/* Handling of internationalization fields for taxonomy terms */
class i18nTermMigration extends DrupalTerm6Migration {

  private $dynamic_mapping = array();

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // Override destination given by the parent class with our own
    $this->destination = new i18nMigrateDestinationTerm($this->destinationVocabulary, $arguments);

    $this->addFieldMapping('language', 'language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('i18n_tsid', 'trid');

    $this->term_translations = i18nTermMigration::getTermsTranslations();
    $this->term_mapping = i18nTermMigration::getTermsMapping();
  }

  /* Add the columns provided by i18n */
  protected function query() {
    $query = parent::query();
    $query->fields('td', array('language', 'trid'));

    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Check if term exist in the translations map
    if (isset($this->term_translations[$row->tid])) {
      $ref = $this->term_translations[$row->tid]; // Get the translation reference
      // Check if term exist in the terms map
      if (!isset($this->term_mapping[$ref])) {
        return FALSE;
      }
    }
    else {
      return FALSE;
    }

    // if ($row->language == '') {
      // $row->language == NULL;
    // }
  }

  /* If this row belongs to a new translation set, create one */
  public function complete($entity, stdClass $row) {
    if (!is_null($entity->i18n_tsid) && 
        !i18n_translation_set_load($entity->i18n_tsid) && 
        $entity->i18n_tsid > 0) {
      $tsid = db_insert('i18n_translation_set')
        ->fields(array(
          'tsid' => $entity->i18n_tsid,
          'type' => 'taxonomy_term',
          'bundle' => $entity->vocabulary_machine_name,
          'master_id' => 0,
          'status'=> 0,
          'created' => REQUEST_TIME,
          'changed' => REQUEST_TIME,
        ))
        ->execute();
    }
  }

  public static function getTermsMapping() {
    return array(
      '2' => array(
        'Basic Journalism', // Original term name
        1, // New translation set id
        'en' => array( // Term language
          'Basic Journalism', // New term name
          1 // Group identifier (for topics one-to-many)
        ),
        'es' => array('El ABC del periodista', 11),
        'pt-br' => array('Jornalismo Básico', 21),
        'ar' => array('صحافة أساسية', 31),
        'ru' => array('Основы журналистики', 51)
      ),
      '3' => array(
        'Business and Economic',
        2,
        17, // New tags translation set id
        'en' => array('Specialized Reporting', 2, 'Business'),
        'es' => array('Periodismo Especializado', 12, 'Negocios'),
        'pt-br' => array('Reportagem Especializada', 22, 'Negócios'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'الأعمال التجارية'),
        'ru' => array('Специальный репортаж', 52, 'Бизнес'),
        'zh-hans' => array('专题报道', 62, '商业')
      ),
      '4' => array(
        'Children',
        2,
        18,
        'en' => array('Specialized Reporting', 2, 'Children'),
        'es' => array('Periodismo Especializado', 12, 'Niñez'),
        'pt-br' => array('Reportagem Especializada', 22, 'Criança'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'الأطفال'),
        'ru' => array('Специальный репортаж', 52, 'Дети')
      ),
      '5' => array(
        'Data Journalism',
        3,
        'en' => array('Data Journalism', 0),
        'es' => array('Periodismo digital', 0),
        'pt-br' => array('Jornalismo Digital', 0),
        'ru' => array('Цифровая журналистика', 0),
        'zh-hans' => array('数字新闻', 0)
      ),
      '9' => array(
        'Diversity',
        4,
        'en' => array('Diversity', 3),
        'es' => array('Diversidad', 13),
        'pt-br' => array('Diversidade', 23),
        'ar' => array('التنوع', 33),
        'ru' => array('Разнообразие', 53)
      ),
      '12' => array(
        'Environmental',
        2,
        19,
        'en' => array('Specialized Reporting', 2, 'Environment'),
        'es' => array('Periodismo Especializado', 12, 'Medio ambiente'),
        'pt-br' => array('Reportagem Especializada', 22, 'Meio Ambiente'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'البيئة'),
        'ru' => array('Специальный репортаж', 52, 'Окружающая среда')
      ),
      '13' => array(
        'Ethics',
        1,
        20,
        'en' => array('Basic Journalism', 1, 'Ethics'),
        'es' => array('El ABC del periodista', 11, 'Ética'),
        'pt-br' => array('Jornalismo Básico', 21, 'Ética'),
        'ar' => array('صحافة أساسية', 31, 'الأخلاق'),
        'ru' => array('Основы журналистики', 51, 'Этика')
      ),
      '15' => array(
        'Health',
        2,
        21,
        'en' => array('Specialized Reporting', 2, 'Health', 2),
        'es' => array('Periodismo Especializado', 12, 'Salud', 12),
        'pt-br' => array('Reportagem Especializada', 22, 'Saúde', 22),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'الصحّة', 32),
        'ru' => array('Специальный репортаж', 52, 'Здоровье', 52),
        'zh-hans' => array('专题报道', 62, '健康', 62)
      ),
      '17' => array(
        'Human Rights',
        2,
        22,
        'en' => array('Specialized Reporting', 2, 'Human Rights'),
        'es' => array('Periodismo Especializado', 12, 'Derechos Humanos'),
        'pt-br' => array('Reportagem Especializada', 22, 'Direitos Humanos'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'حقوق الإنسان'),
        'ru' => array('Специальный репортаж', 52, 'Права человека')
      ),
      '20' => array(
        'Investigative Reporting',
        5,
        'en' => array('Investigative Reporting', 0),
        'es' => array('Periodimo de investigación', 0),
        'pt-br' => array('Jornalismo Investigativo', 0),
        'ar' => array('التغطية الصحفية الإستقصائية', 0),
        'ru' => array('Расследовательская журналистика', 0),
        'zh-hans' => array('调查性报道', 0)
      ),
      '21' => array(
        'Management',
        6,
        23,
        'en' => array('Business of Journalism', 4, 'Management'),
        'es' => array('El periodismo como negocio', 14, 'Gestión'),
        'pt-br' => array('Negócio do Jornalismo', 24, 'Gerência'),
        'ar' => array('التغطية الصحفية المتخصصة', 34, 'الصناعة الصحفية'),
        'ru' => array('Бизнес-сторона журналистики', 54, 'Менеджмент'),
        'zh-hans' => array('财经新闻', 64, '管理')
      ),
      '22' => array(
        'Media Laws',
        1,
        24,
        'en' => array('Basic Journalism', 1, 'Media Law'),
        'es' => array('El ABC del periodista', 11, 'Legislación'),
        'pt-br' => array('Jornalismo Básico', 21, 'Lei da Mídia'),
        'ar' => array('صحافة أساسية', 31, 'قانون الإعلام'),
        'ru' => array('Основы журналистики', 51, 'Законы о медиа'),
        'zh-hans' => array('新闻基础', 61, '媒体法规')
      ),
      '23' => array(
        'Multimedia and Digital Journalism',
        7,
        'en' => array('Digital Journalism', 0),
        'es' => array('Periodismo digital', 0),
        'pt-br' => array('Jornalismo Digital', 0),
        'ar' => array('الصحافة الرقمية', 0),
        'ru' => array('Цифровая журналистика', 0),
        'zh-hans' => array('数字新闻', 0)
      ),
      '25' => array(
        'Photojournalism',
        8,
        'en' => array('Photojournalism', 0),
        'es' => array('Fotoperiodismo', 0),
        'pt-br' => array('Fotojornalismo', 0),
        'ar' => array('التصوير الصحفي', 0),
        'fa' => array('عکاسی خبری', 0),
        'ru' => array('Фотожурналистика', 0),
        'zh-hans' => array('新闻摄影', 0)
      ),
      '26' => array(
        'Politics and Elections',
        2,
        25,
        'en' => array('Specialized Reporting', 2, 'Politics'),
        'es' => array('Periodismo Especializado', 12, 'Política'),
        'pt-br' => array('Reportagem Especializada', 22, 'Política'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'السياسة'),
        'fa' => array('گزارشگری تخصصی', 42), // need tag name
        'ru' => array('Специальный репортаж', 52, 'Политика'),
        'zh-hans' => array('专题报道', 62, '政治')
      ),
      '27' => array(
        'Press Freedom',
        1,
        26,
        'en' => array('Basic Journalism', 1, 'Press Freedom', 1),
        'es' => array('El ABC del periodista', 11, 'Libertad de prensa', 11),
        'pt-br' => array('Jornalismo Básico', 21, 'Liberdade de Imprensa', 21),
        'ar' => array('صحافة أساسية', 31, 'حرية الصحافة', 31),
        'fa' => array('روزنامه‌نگاری اولیه', 41), // need tag name
        'ru' => array('Основы журналистики', 51, 'Свобода прессы', 51)
      ),
      '28' => array(
        'Print Journalism',
        1,
        27,
        'en' => array('Basic Journalism', 1, 'Print'),
        'es' => array('El ABC del periodista', 11, 'Periodismo gráfico'),
        'pt-br' => array('Jornalismo Básico', 21, 'Imprensa'),
        'ar' => array('صحافة أساسية', 31, 'الصحف المطبوعة'),
        'ru' => array('Основы журналистики', 51, 'Печатная журналистика'),
        'zh-hans' => array('新闻基础', 61, '报纸')
      ),
      '30' => array(
        'Radio/audio',
        9,
        'en' => array('Audio', 0),
        'es' => array('Audio', 0),
        'pt-br' => array('Áudio', 0),
        'ar' => array('الصوت', 0),
        'fa' => array('صدا', 0),
        'ru' => array('Аудио', 0),
        'zh-hans' => array('音频', 0)
      ),
      '32' => array(
        'Science',
        2,
        28,
        'en' => array('Specialized Reporting', 2, 'Science'),
        'es' => array('Periodismo Especializado', 12, 'Ciencia'),
        'pt-br' => array('Reportagem Especializada', 22, 'Ciência'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'العلم'),
        'fa' => array('گزارشگری تخصصی', 42), // need tag name
        'ru' => array('Специальный репортаж', 52, 'Наука')
      ),
      '34' => array(
        'Sports',
        2,
        29,
        'en' => array('Specialized Reporting', 2, 'Sports'),
        'es' => array('Periodismo Especializado', 12, 'Deportes'),
        'pt-br' => array('Reportagem Especializada', 22, 'Esporte'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'الرياضة'),
        'ru' => array('Специальный репортаж', 52, 'Спорт')
      ),
      '36' => array(
        'TV/Video/Documentary',
        10,
        'en' => array('Video', 0),
        'es' => array('Video', 0),
        'pt-br' => array('Vídeo', 0),
        'ar' => array('فيديو', 0),
        'fa' => array('ویدیو', 0),
        'ru' => array('Видео', 0)
      ),
      '38' => array(
        'Training-of-Trainers',
        1,
        'en' => array('Basic Journalism', 1),
        'es' => array('El ABC del periodista', 11),
        'pt-br' => array('Jornalismo Básico', 21),
        'ar' => array('صحافة أساسية', 31),
        'ru' => array('Основы журналистики', 51)
      ),
      '39' => array(
        'Women',
        4,
        30,
        'en' => array('Diversity', 3, 'Women'),
        'es' => array('Diversidad', 13, 'Mujeres'),
        'pt-br' => array('Diversidade', 23, 'Mulher'),
        'ar' => array('التنوع', 33, 'النساء'),
        'fa' => array('تنوع', 43), // need tag name
        'ru' => array('Разнообразие', 53, 'Женщины')
      ),
      '40' => array(
        'Young Journalists',
        1,
        31,
        'en' => array('Basic Journalism', 1, 'Youth'),
        'es' => array('El ABC del periodista', 11, 'Juventud'),
        'pt-br' => array('Jornalismo Básico', 21, 'Jovem'),
        'ar' => array('صحافة أساسية', 31, 'الشباب'),
        'fa' => array('روزنامه‌نگاری اولیه', 41), // need tag name
        'ru' => array('Основы журналистики', 51, 'Молодежь'),
        'zh-hans' => array('新闻基础', 61, '青年')
      ),
      '290' => array(
        'Citizen Journalism',
        11,
        'en' => array('Citizen Journalism', 0),
        'es' => array('Periodismo ciudadano', 0),
        'pt-br' => array('Jornalismo Cidadão', 0),
        'ar' => array('صحافة المواطن', 0),
        'fa' => array('روزنامه‌نگاری شهروندی', 0), // need tag name
        'ru' => array('Гражданская журналистика', 0),
        'zh-hans' => array('公民新闻', 0)
      ),
      '291' => array(
        'Design',
        1,
        32,
        'en' => array('Basic Journalism', 1, 'Design'),
        'es' => array('El ABC del periodista', 11, 'Diseño'),
        'pt-br' => array('Jornalismo Básico', 21, 'Design'),
        'ar' => array('صحافة أساسية', 31, 'التصميم'),
        'ru' => array('Основы журналистики', 51, 'Дизайн'),
        'zh-hans' => array('新闻基础', 61, '设计')
      ),
      '293' => array(
        'Disasters',
        2,
        33,
        'en' => array('Specialized Reporting', 2, 'Disasters'),
        'es' => array('Periodismo Especializado', 12, 'Desastres'),
        'pt-br' => array('Reportagem Especializada', 22, 'Desastres'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'الكوارث'),
        'ru' => array('Специальный репортаж', 52, 'Катастрофы'),
        'zh-hans' => array('专题报道', 62, '灾难')
      ),
      '294' => array(
        'Freelancing',
        12,
        'en' => array('Freelancing', 0),
        'es' => array('Freelancing', 0),
        'pt-br' => array('Freelance', 0),
        'ar' => array('الصحفيين المستقلين', 0),
        'ru' => array('Фрилансинг', 0)
      ),
      '295' => array(
        "Journalist's safety",
        13,
        'en' => array("Journalists' Safety", 0),
        'es' => array('La seguridad del periodista', 0),
        'pt-br' => array('Segurança do Jornalista', 0),
        'ar' => array('سلامة الصحفي', 0),
        'ru' => array('Безопасность журналистов', 0),
        'zh-hans' => array('记者安全', 0)
      ),
      '296' => array(
        'Marketing',
        6,
        34,
        'en' => array('Business of Journalism', 4, 'Marketing'),
        'es' => array('El periodismo como negocio', 14, 'Marketing'),
        'pt-br' => array('Negócio do Jornalismo', 24, 'Marketing'),
        'ar' => array('التغطية الصحفية المتخصصة', 34, 'التسويق'),
        'fa' => array('روزنامه نگاری اقتصادی', 44), // need tag name
        'ru' => array('Бизнес-сторона журналистики', 54, 'Маркетинг'),
        'zh-hans' => array('财经新闻', 64, '市场营销')
      ),
      '297' => array(
        'War and conflict',
        2,
        35,
        'en' => array('Specialized Reporting', 2, 'Conflict'),
        'es' => array('Periodismo Especializado', 12, 'Conflictos'),
        'pt-br' => array('Reportagem Especializada', 22, 'Conflito'),
        'ar' => array('التغطية الصحفية المتخصصة', 32, 'الصراع'),
        'fa' => array('گزارشگری تخصصی', 42), // need tag name
        'ru' => array('Специальный репортаж', 52, 'Конфликт')
      ),
      '350' => array(
        'Specialized Reporting',
        2,
        'en' => array('Specialized Reporting', 2),
        'es' => array('Periodismo Especializado', 12),
        'pt-br' => array('Reportagem Especializada', 22),
        'ar' => array('التغطية الصحفية المتخصصة', 32),
        'fa' => array('گزارشگری تخصصی', 42), // need tag name
        'ru' => array('Специальный репортаж', 52)
      ),
      '1063' => array(
        'Interviewing',
        1,
        36,
        'en' => array('Basic Journalism', 1, 'Interviewing'),
        'es' => array('El ABC del periodista', 11, 'Entrevistar'),
        'pt-br' => array('Jornalismo Básico', 21, 'Técnicas de Entrevista'),
        'ru' => array('Основы журналистики', 51, 'Проведение интервью')
      ),
      '1256' => array(
        'Social Networking',
        14,
        'en' => array('Social Media', 5)
      ),
      '1257' => array(
        'Writing and Editing',
        15,
        'en' => array('Writing and Editing', 0),
        'es' => array('Escribir y editar', 0),
        'pt-br' => array('Segurança do Jornalista', 0),
        'ru' => array('Написание текстов и редактирование', 0)
      ),
      '1822' => array(
        'Health in Africa',
        2,
        21,
        'en' => array('Specialized Reporting', 2, 'Health', 2),
        'es' => array('Periodismo Especializado', 12, 'Salud', 12),
        'pt-br' => array('Reportagem Especializada', 22, 'Saúde', 22),
        'ru' => array('Специальный репортаж', 52, 'Здоровье', 52)
      ),
      '2234' => array(
        'World Press Freedom Day',
        1,
        26,
        'en' => array('Basic Journalism', 1, 'Press Freedom', 1),
        'es' => array('El ABC del periodista', 11, 'Libertad de prensa', 11),
        'pt-br' => array('Jornalismo Básico', 21, 'Liberdade de Imprensa', 21),
        'ar' => array('صحافة أساسية', 31, 'حرية الصحافة', 31),
        'fa' => array('روزنامه‌نگاری اولیه', 41), // need tag name
        'ru' => array('Основы журналистики', 51, 'Свобода прессы', 51)
      ),
      '3090' => array(
        'Social Media as a Reporting Tool',
        14,
        'en' => array('Social Media', 5),
        'es' => array('Redes sociales', 15),
        'pt-br' => array('Redes Sociais', 25),
        'ar' => array('الإعلام الإجتماعي', 35),
        'ru' => array('Социальные медиа', 55),
        'zh-hans' => array('社交媒体', 65)
      ),
      '3091' => array(
        'Community Engagement',
        16,
        'en' => array('Community Engagement', 0),
        'es' => array('Participación comunitaria', 0),
        'pt-br' => array('Engajamento da Comunidade', 0),
        'ar' => array('شراكة المجتمع المحيط', 0),
        'ru' => array('Привлечение населения', 0)
      )
    );
  }

  public static function getTermsTranslations() {
    return array(
      '2' => '2', '370' => '2', '371' => '2', '372' => '2', '374' => '2',
      '3' => '3', '376' => '3', '377' => '3', '378' => '3', '380' => '3', '381' => '3',
      '4' => '4', '471' => '4', '472' => '4', '473' => '4', '475' => '4',
      '5' => '5', '11365' => '5', '11364' => '5', '11366' => '5', '5816' => '5',
      '9' => '9', '489' => '9', '490' => '9', '491' => '9', '493' => '9',
      '12' => '12', '394' => '12', '395' => '12', '396' => '12', '398' => '12',
      '13' => '13', '400' => '13', '401' => '13', '402' => '13', '404' => '13',
      '15' => '15', '406' => '15', '407' => '15', '408' => '15', '410' => '15', '411' => '15',
      '17' => '17', '501' => '17', '502' => '17', '503' => '17', '505' => '17',
      '20' => '20', '412' => '20', '413' => '20', '414' => '20', '416' => '20', '417' => '20',
      '21' => '21', '512' => '21', '513' => '21', '514' => '21', '516' => '21', '2350' => '21',
      '22' => '22', '524' => '22', '525' => '22', '526' => '22', '528' => '22', '405' => '22',
      '23' => '23', '418' => '23', '419' => '23', '420' => '23', '422' => '23', '494' => '23',
      '25' => '25', '530' => '25', '531' => '25', '532' => '25', '533' => '25', '534' => '25', '535' => '25',
      '26' => '26', '424' => '26', '425' => '26', '426' => '26', '427' => '26', '428' => '26', '429' => '26',
      '27' => '27', '430' => '27', '431' => '27', '432' => '27', '498' => '27', '434' => '27',
      '28' => '28', '435' => '28', '436' => '28', '437' => '28', '439' => '28', '1259' => '28',
      '30' => '30', '441' => '30', '442' => '30', '443' => '30', '444' => '30', '445' => '30', '458' => '30',
      '32' => '32', '536' => '32', '537' => '32', '538' => '32', '539' => '32', '540' => '32',
      '34' => '34', '548' => '34', '549' => '34', '550' => '34', '553' => '34',
      '36' => '36', '453' => '36', '454' => '36', '455' => '36', '456' => '36', '457' => '36',
      '38' => '38', '447' => '38', '448' => '38', '449' => '38', '451' => '38',
      '39' => '39', '554' => '39', '555' => '39', '556' => '39', '557' => '39', '558' => '39',
      '40' => '40', '559' => '40', '560' => '40', '561' => '40', '562' => '40', '563' => '40', '3143' => '40',
      '290' => '290', '382' => '290', '383' => '290', '384' => '290', '385' => '290', '386' => '290', '387' => '290',
      '291' => '291', '477' => '291', '478' => '291', '479' => '291', '481' => '291', '2351' => '291',
      '293' => '293', '483' => '293', '484' => '293', '485' => '293', '487' => '293', '488' => '293',
      '294' => '294', '11367' => '294', '496' => '294', '497' => '294', '499' => '294',
      '295' => '295', '506' => '295', '507' => '295', '508' => '295', '510' => '295', '511' => '295',
      '296' => '296', '518' => '296', '519' => '296', '520' => '296', '522' => '296',
      '297' => '297', '459' => '297', '460' => '297', '461' => '297', '462' => '297', '463' => '297',
      '350' => '350', '542' => '350', '543' => '350', '544' => '350', '545' => '350', '546' => '350',
      '1063' => '1063', '11372' => '1063', '11371' => '1063', '11373' => '1063',
      '1256' => '1256',
      '1257' => '1257', '11375' => '1257', '11376' => '1257', '11374' => '1257',
      '1822' => '1822', '11368' => '1822', '11370' => '1822', '11369' => '1822',
      '2234' => '2234', '2238' => '2234', '2240' => '2234', '2237' => '2234', '2236' => '2234', '2239' => '2234',
      '3090' => '3090', '3093' => '3090', '3095' => '3090', '3098' => '3090', '3100' => '3090', '3142' => '3090',
      '3091' => '3091', '3092' => '3091', '3094' => '3091', '3096' => '3091', '3099' => '3091',
    );
  }
}

class TermTopicMigration extends i18nTermMigration {

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $ref = $this->term_translations[$row->tid]; // Get the translation reference
    $group = $this->term_mapping[$ref][$row->language][1]; // Get the term group
    if ($group != 0) {
      // If the term group is another than 0
      // Check if the group is already processed
      if (isset($this->dynamic_mapping[$group])) {
        $source_id = array($this->dynamic_mapping[$group]); // Get the imported source term id
        $dest_id = $this->getMap()->lookupDestinationID($source_id); // Get the imported destination term id
        $this->getMap()->saveIDMapping($row, array($dest_id)); // Add to the migrate table the record
        return FALSE;
      }
      else {
        $this->dynamic_mapping[$group] = $row->tid;
      }
    }

    $row->name = $this->term_mapping[$ref][$row->language][0]; // Update the term name

    // Check if term have an associated translation set id
    if (isset($this->term_mapping[$ref][1])) {
      $row->trid = $this->term_mapping[$ref][1];
    }
  }
}

class TermTagsMigration extends i18nTermMigration {

  private $dynamic_mapping = array();

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $ref = $this->term_translations[$row->tid]; // Get the translation reference
    // Check if term have an associated tag term
    if (!isset($this->term_mapping[$ref][$row->language][2])) {
      return FALSE;
    }

    if (isset($this->term_mapping[$ref][$row->language][3])) {
      $group = $this->term_mapping[$ref][$row->language][3]; // Get the term group
      // Check if the group is already processed
      if (isset($this->dynamic_mapping[$group])) {
        $source_id = array($this->dynamic_mapping[$group]); // Get the imported source term id
        $dest_id = $this->getMap()->lookupDestinationID($source_id); // Get the imported destination term id
        $this->getMap()->saveIDMapping($row, array($dest_id)); // Add to the migrate table the record
        return FALSE;
      }
      else {
        $this->dynamic_mapping[$group] = $row->tid;
      }
    }

    $row->name = $this->term_mapping[$ref][$row->language][2]; // Update the term name

    if (isset($this->term_mapping[$ref][2])) {
      $row->trid = $this->term_mapping[$ref][2];
    }
  }

  /**
   * Implementation of Migration::createStub().
   * Extend DrupalTermMigration::createStub.
   *
   * @param $migration
   * @return array|bool
   */
  protected function createStub($migration, $source_key) {
    // Allow to create stub only for the existing tags
    if (!isset($this->term_mapping[$source_key[0]])) { // If the source tid is not in the mapping
      return FALSE; // Do not create stub
    }

    parent::createStub($migration, $source_key);
  }
}

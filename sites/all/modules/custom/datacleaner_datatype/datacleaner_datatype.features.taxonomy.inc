<?php
/**
 * @file
 * datacleaner_datatype.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datacleaner_datatype_taxonomy_default_vocabularies() {
  return array(
    'data_types' => array(
      'name' => 'Data Types',
      'machine_name' => 'data_types',
      'description' => 'Reference to the original database',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

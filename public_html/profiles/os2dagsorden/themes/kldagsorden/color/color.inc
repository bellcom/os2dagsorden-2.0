<?php

$info = array();

// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array('css/global.css');

// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'color-body' => t('Body  color'),
  'color-branding-secondary' => t('Secondary Branding color'),
  'color-branding-primary' => t('Primary Branding color'),
  'color-background-primary' => t('Primary background color'),
  'color-background-secondary' => t('Secondary background color'),
      
);

// Color schemes for the site.
$info['schemes'] = array(

  // Define the default scheme.
  'default' => array(

    // Scheme title.
    'title' => t('Syddjurs colouring'),

    // Scheme colors
    'colors' => array(
      'color-body' => '#FFF',
      'color-branding-secondary' => '#9c1a5e',
      'color-branding-primary' => '#ae477d',
      'color-background-primary' => '#f7f1f1',
      'color-background-secondary' => '#e3d6d6',
    ),
  ),

  // Define the default scheme.
  'scheme_blue' => array(

    // Scheme title.
    'title' => t('KL colouring (Blue shceme)'),

    // Scheme colors
    'colors' => array(
      'color-body' => '#FFF',
      'color-branding-secondary' => '#2c8abe',
      'color-branding-primary' => '#2d8bc0',
      'color-background-primary' => '#fbfcfd',
      'color-background-secondary' => '#f2f4fb',
      
    ),
  ),
);

// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array();

// Files used in the scheme preview.
$info['preview_css'] = '';
$info['preview_js'] = '';
$info['preview_html'] = '';

// Gradients
$info['gradients'] = array();

// Color areas to fill (x, y, width, height).
$info['fill'] = array();

// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array();

// Base file for image generation.
$info['base_image'] = 'color/base.png';
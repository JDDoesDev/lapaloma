<?php
/**
 * @file
 * Template for the main page.
 */
?>
<?php
if ($is_front) : ?>
<script type='application/ld+json'>
{
  "@context": "http://www.schema.org",
  "@type": "Restaurant",
  "name": "La Paloma Bar and Grill",
  "url": "http://www.lapalomagrill.com",
  "sameAs": [
    "https://www.yelp.com/biz/la-paloma-grill-michigan-city-5",
    "http://www.facebook.com/Lapalomamichigancity"
  ],
  "logo": "http://www.lapalomagrill.com/sites/all/themes/lp_custom/assets/images/min/paloma_sm.png",
  "image": "La Paloma Grill",
  "description": "La Paloma Bar and Grill is Michigan City, Indiana's newest destination for casual Mexican and American food.  Whether you're looking for a meal with the family or a few drinks after work in our full-service bar, there's sure to be something for you.",
  "address": {
    "@type": "PostalAddress",
    "streetAddress": "3940 Franklin St",
    "addressLocality": "Michigan City",
    "addressRegion": "IN",
    "postalCode": "46360",
    "addressCountry": "United States"
  },
  "openingHours": "Mo, Tu, We, Th, Fr, Sa, Su 11:00-22:00",
  "contactPoint": {
    "@type": "ContactPoint",
    "contactType": "Customer Service",
    "telephone": "+12198720056"
  }
}
 </script>
<?php endif; ?>
<div class="page">
  <header class="header padding--sm" role="header">
    <div class="container logo-container">
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php $site_name; ?>" class="logo">
          <img src="<?php print $logo; ?>" alt="<?php $site_name; ?>" />
        </a>
      <?php endif; ?>
      <div class="address margin--sm--top">
        <?php if (!empty($address)): ?>
          <a href="https://goo.gl/maps/xwbodjuRTr72">
            <i class="fa fa-map-marker"></i> <?php print $address; ?>
          </a>
        <?php endif; ?>
        <?php if (!empty($phone)): ?>
        <a href="tel:+<?= $phone; ?>">
          <i class="fa fa-phone margin--sm--left"></i> <?php print $phone; ?>
        </a>
        <?php endif; ?>
      </div>
      <?php if ($tabs): ?>
        <div class="page-tabs">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
    </div>
  </header>

  <nav class="navbar navbar-default border-color-primary" role="navigation">
    <div class="container">
      <div class="navbar-header">
        <div class="visible-xs pull-left">
          <?php print render($menu_link); ?>
        </div>
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <i class="fa fa-bars fa-2x"></i>
        </button>
      </div>

      <div class="collapse navbar-collapse" id="navbar-collapse">
        <?php if ($main_menu): ?>
          <ul class="nav navbar-nav">
            <?php print render($main_menu); ?>
          </ul>
        <?php endif; ?>
      </div>
    </div>
  </nav>

  <main id="main" class="main">
    <?php if ($messages): ?>
      <div id="messages" class="container margin--sm--top">
        <?php print $messages; ?>
      </div>
    <?php endif; ?>
    <?php if (!$is_panel): ?>
      <div class="container padding--lg--bottom padding--lg--top">
        <h1 class="title clear-margin--top margin--md--bottom"><?php print $title; ?></h1>
        <?php print render($page['content']); ?>
      </div>
    <?php else: ?>
      <?php print render($page['content']); ?>
    <?php endif; ?>
  </main>

  <footer class="footer" role="footer">
    <?php if (!empty($footer_text)): ?>
      <div class="container footer-text">
        <?php print $footer_text; ?>
      </div>
    <?php endif; ?>
    <div class="container">
      <?php if (!empty($footer_nav)): ?>
        <ul class="nav footer-nav">
          <?php print render($footer_nav); ?>
        </ul>
      <?php endif; ?>

      <?php if ($copyright): ?>
        <div class="copyright">
          <?php print $copyright; ?>
        </div>
      <?php endif; ?>
    </div>
  </footer>
</div>

---
html_theme.sidebar_secondary.remove:
sd_hide_title: true
---

<style>
.bd-main .bd-content .bd-article-container {
  max-width: 70rem;	/* Make homepage a little wider instead of 60em */
}
article.bd-article section {
  padding: 3rem 0 7rem;	/* Extra top/bottom padding to the sections */
}
</style>

(homepage)=
# SPARCED: Large-Scale Human Cell Mechanistic Modeling

<div id="hero">
<div id="hero-left">  <!-- Start Hero Left -->
  <h2 style="font-size: 60px; font-weight: bold; margin: 2rem auto 0;"> SPARCED </h2>
  <h3 style="font-weight: bold; margin-top: 0;"> Large-Scale Human Cell Mechanistic Modeling </h3>
  <p> SPARCED is one of the largest mechanistic models of a human cell in the literature.
      Its modeling pipeline is open-source and serves for creating and simulating cellular pathway models.
  </p>
<!-- Hero Left Buttons -->
<div class="homepage-button-container">
  <div class="homepage-button-container-row">
      <a href="./quickstart.html" class="homepage-button primary-button"> Get Started </a>
      <a href="./about/index.html" class="homepage-button secondary-button"> Learn More </a>
  </div>
  <div class="homepage-button-container-row">
      <a href="./community/devs/reference/summary.html" class="homepage-button-link"> For Developers: Access Technical Documentation → </a>
  </div>
</div> <!-- End Hero Left Buttons -->
</div>  <!-- End Hero Left -->
<div id="hero-right">
  <img alt="SPARCED scheme" src="./_static/sparced_bouhaddou_figure.png" >
</div> <!-- End Hero Right -->
</div> <!-- End Hero -->

# Contribute

::::{tab-set}

:::{tab-item} Cellular Pathway Modeling
SPARCED is an ongoing project that is continuously expanded by the community.
Extensions of the original model and additional pathway models are very welcome.
See our [contribution guide](community/modelers.md) to learn more about the process.
If you have a question, do not hesitate to [contact](contact.md) us.
:::

:::{tab-item} For Developers
Contributions to the development of SPARCED and issue reports are very welcome on
[our GitHub repository](https://github.com/SPARCED/SPARCED).
Technical documentation is available in the [developers guide](community/devs/index.md).
If you have a question, do not hesitate to [contact](contact.md) us.
:::
::::

# Institutional Partners

The following institutions support the development and maintenance of SPARCED:

::::{grid} 2 2 4 4

:::{grid-item}
[![clemson_uni_logo]( _static/logo_clemson_university.svg)](https://www.clemson.edu/)
:::
:::{grid-item}
[![umea_uni_logo](_static/logo_umea_university.svg)](https://www.umu.se/en/)
:::
:::{grid-item}
[![palmetto_logo](_static/logo_palmetto2.jpg)](https://docs.rcd.clemson.edu/palmetto/)
:::
:::{grid-item}
[![hpc2n_logo](_static/logo_hpc2n.png)](https://www.hpc2n.umu.se/)
:::
::::

# Citation

Please cite SPARCED using <a href="https://doi.org/10.1038/s41467-022-31138-1"><img alt="Nature communications" src="https://badgen.net/badge/Nat%20Commun/https%3A%2F%2Fdoi.org%2F10.1038%2Fs41467-022-31138-1/blue?icon=awesome"></a>
 

:::{toctree}
:maxdepth: 1
:hidden:

Getting Started <quickstart>
About <about/index>
User Guide <user_guide/index>
Model Format <modeling/index>
Examples <examples/index>
Contribute <community/index>
Contact <contact>
:::

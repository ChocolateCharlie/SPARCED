# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'SPARCED'
copyright = '2025, Birtwistle Lab (Clemson, SC, USA) & Erdem Lab (Umeå, Västerbotten, Sweden)'
author = 'Birtwistle Lab (Clemson, SC, USA) & Erdem Lab (Umeå, Västerbotten, Sweden)'
release = '2.0'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = []

templates_path = ['_templates']
exclude_patterns = []



# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = 'pydata_sphinx_theme'
html_static_path = ['_static']
html_theme_options = {
        "announcement": "This site is currently under construction.",
        "external_links": [
            {"name": "To the Birtwistle lab", "url": "https://www.birtwistlelab.com"},
            {"name": "To the Erdem lab", "url": "https://erdemlab.github.io"}
        ],
        "github_url": "https://github.com/SPARCED/SPARCED"
    }


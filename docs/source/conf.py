# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Path setup --------------------------------------------------------------
import os
import sys

from pathlib import Path

sys.path.insert(0, Path(__file__).parents[1].resolve().as_posix())
sys.path.insert(0, os.path.abspath('../../'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/compilation'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/compilation/amici_scripts'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/compilation/antimony_scripts'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/compilation/conversion_scripts'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/compilation/sbml_scripts'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/simulation'))
sys.path.insert(0, os.path.abspath('../../SPARCED/src/utils'))

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'SPARCED'
copyright = '2025, Birtwistle Lab (Clemson, SC, USA) & Erdem Lab (Umeå, Västerbotten, Sweden)'
author = 'Birtwistle Lab (Clemson, SC, USA) & Erdem Lab (Umeå, Västerbotten, Sweden)'
release = '2.0.0'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
        'myst_parser',  # Use markdown in documentation
        'sphinx_copybutton',
        'sphinx.ext.autodoc',
        'sphinx.ext.autosummary',
        'sphinx.ext.napoleon',
        'sphinx.ext.viewcode'
        ]
autosummary_generate = True
myst_enable_extensions = ['colon_fence', 'deflist', 'dollarmath', 'amsmath']
source_suffix = {
        '.md': 'markdown',
        '.rst': 'restructuredtext'
        }

templates_path = ['_templates']
exclude_patterns = []

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = 'pydata_sphinx_theme'
html_static_path = ['_static']
html_theme_options = {
        'announcement': 'This site is currently under construction.',
        'github_url': 'https://github.com/SPARCED/SPARCED',
        'header_links_before_dropdown': 7,
        'icon_links': [
            {
                'name': 'Birtwistle Lab',
                'url': 'https://www.birtwistlelab.com',
                'icon': 'fa-solid fa-flask',
            },
            {
                'name': 'Erdem Lab',
                'url': 'https://erdemlab.github.io',
                'icon': 'fa-solid fa-dna'
            }
        ]
    }


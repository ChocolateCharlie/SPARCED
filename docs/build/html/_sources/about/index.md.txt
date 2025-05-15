# About

SPARCED is an open-source, scalable, and user-friendly computational pipeline
designed for constructing, merging, expanding, and simulating large-scale,
single-cell mechanistic models. It enables researchers to explore complex
intracellular dynamics with minimal setup, whether running small-scale
experiments locally or deploying large-scale simulations on high-performance
computing (HPC) clusters.

The name SPARCED is an acronym representing the core biological modules
integrated into the main model designed with that pipeline: **S**BML,
**P**roliferation, **A**poptosis, **R**eceptor signaling, **C**ell cycle,
**E**xpression, and **D**NA damage. These modules collectively form one of the
most comprehensive mechanistic models of a human cell currently available in
the literature _[1]_.

SPARCED is designed with accessibility and extensibility in mind. Users can
interact with the platform through Python scripts, Jupyter Notebooks, or a
built-in command-line interface — so no advanced programming skills required.
The tool supports collaborative development, modular pathway integration,
and parameter customization, making it ideal for both novice users and expert
modelers. Moreover, its containerized distribution ensures reproducibility
and ease of deployment across diverse computing environments.

Originally developed for systems biology _[2]_, SPARCED has demonstrated its
utility to support quantitative sytems pharmacology (QSP) applications through
virtual dose-response assays, successfully replicating _in vitro_ data and
offering insights into cell-to-cell variability _[3]_.

By leveraging open-source modularity, collaborative development, and HPC
compatibility, SPARCED enables scalable construction and simulation of large
mechanistic models for systems biology and QSP applications.

## Get Started

  - Deep-dive into the [Quickstart Tutorial](../quickstart.md)
  - Read the [User Guide](../user_guide/index.md) 

Learn more about SPARCED's scientific rationale and core features in the
following pages of this section:

:::{toctree}
:maxdepth: 1

Terminology <definitions.md>
Core Mathematical Framework <math.md>
Regulatory Compliance for Pharmaceutical Industry <regulatory.md>
:::	

## Replicate our results

You will find specific instructions on how to run the model (including previous
versions) as described in each of our published papers
[here](papers/summary.rst).

## Acknowledgments


We greatly appreciate the help from multiple colloborators, including:

- the [Feltus Lab](https://www.clemson.edu/science/departments/genetics-biochemistry/people/profiles/ffeltus)
- the [Hasenauer Lab](https://www.mathematics-and-life-sciences.uni-bonn.de/en/group-members/jan-hasenauer)
- [Robert C. Blake](https://bbs.llnl.gov/RobertBlake.html) from LLNL

_This material is based on work supported by the National Science Foundation
under Grant Nos. MRI# 2024205, MRI# 1725573, and CRI# 2010270._

_Any opinions, findings and conclusions or recommendations expressed in this
material are those of the author(s) and do not necessarily reflect the views of
the National Science Foundation._

_Clemson University is acknowledged for their generous allotment of compute time
on the Palmetto Cluster._


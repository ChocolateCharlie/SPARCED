# Terminology

```{article-info}
:author: Aurore K. Amrit
:date: May 15, 2025
:read-time: 8 min read
:class-container: sd-p-2 sd-outline-muted sd-rounded-1
```

**AMICI (Advanced Multilanguage Interface to CVODES and IDAS)**
AMICI is a high-performance simulation engine used internally by SPARCED to
compile and solve ODE-based models. It provides efficient numerical integration,
sensitivity analysis, and supports both deterministic and stochastic
simulations.

**CLI (Command-Line Interface)**
SPARCED provides a CLI that allows users to interact with the pipeline,
run simulations, generate documentation, and manage models without writing
code.

**Compilation**
Compilation in SPARCED refers to the transformation of the model
(typically defined in SBML or structured input files) into a low-level,
executable format using the AMICI engine. This step enables efficient
numerical simulation.

**Deterministic (Simulation) Mode**
In deterministic simulations, the system's behavior is fully determined by
the initial conditions and parameters, with no randomness involved.
SPARCED uses ODEs to perform deterministic simulations, providing consistent
and reproducible results for a given input.

**Docker**
Docker is a platform for containerizing applications, ensuring that software
runs reliably across different computing environments. SPARCED is distributed
with a Docker container that encapsulates all dependencies, making it easy to
deploy and run the pipeline on any system without manual setup.

**Evaluation**
The process of verifying and validating a model’s structure and behavior
against experimental data or expected outcomes.

**Jupyter Notebook**
A Jupyter Notebook is an interactive computational environment that allows
users to combine code, text, and visualizations in a single document.
SPARCED supports Jupyter Notebooks for running simulations, analyzing results,
and documenting workflows in a reproducible and user-friendly format.

**Ordinary Differential Equations (ODEs)**
ODEs describe the continuous time evolution of species concentrations in
deterministic models. Each ODE corresponds to a species and is derived from the
net effect of all reactions involving that species.

**Parameters**
Parameters are fixed numerical values used in the model to define reaction
rates.

**Rate Laws**
A rate law defines the mathematical expression that governs the speed of a
reaction. It typically depends on the concentrations of reactants and
associated parameters, and can follow mass-action kinetics,
Michaelis-Menten kinetics, or custom formulations.

**SBML (Systems Biology Markup Language)**
SBML is a standardized XML-based format for representing computational models
in systems biology. SPARCED uses SBML as a core format for model definition
and interoperability.

**Sensitivity Analysis**
A technique used to determine how variations in model parameters affect model
outputs. SPARCED includes tools to perform sensitivity analysis, which is
crucial for model validation and robustness assessment.

**Simulation**
Simulation is the process of numerically solving the model equations
over time to predict the behavior of species under given conditions.
SPARCED supports both deterministic and stochastic simulations.

**Species**
A species represents a molecular entity in the model, such as a protein, mRNA,
complex, or small molecule. Each species has a concentration or count that
evolves over time according to the model’s dynamics.

**Stochastic Gene Expression (SGE)**
SGE refers to the stochastic (random) modeling of gene expression events, such
as transcription and translation. In SPARCED, SGE introduces probabilistic
behavior into gene regulation to simulate cell-to-cell variability.

**Stochastic (Simulation) Mode**
Stochastic simulations incorporate randomness to model the inherent variability
in biological systems, especially at the single-cell level. In SPARCED,
stochasticity is introduced through the SGE module, allowing simulations to
capture gene expression noise and other probabilistic events.


# Core Mathematical Framework

```{article-info}
:author: Aurore K. Amrit (Jonah wanted here)
:date: May 15, 2025
:read-time: 3 min read
:class-container: sd-p-2 sd-outline-muted sd-rounded-1
```

## ODE Solver

SPARCED simulates intracellular dynamics primarily through systems of ordinary
differential equations (ODEs), which describe the time evolution of molecular
species across interconnected signaling and regulatory pathways. These ODEs
are compiled and solved using the **AMICI** (_Advanced Multilanguage Interface
to CVODES and IDAS_) simulation engine, which provides high-performance
numerical integration and sensitivity analysis capabilities. While users
interact with SPARCED through high-level interfaces, AMICI operates under
the hood to ensure efficient and accurate simulation of both deterministic
and stochastic model variants.

## SGE Module

In addition to deterministic modeling, SPARCED incorporates a custom-built
**Stochastic Gene Expression** (SGE) module to capture intrinsic noise in gen
regulation processes. This module introduces stochasticity into gene
activation, mRNA synthesis, and degradation events, enabling more realistic
single-cell behavior simulations. SGE is tightly integrated into the SPARCED
pipeline and operates alongside the ODE solver, injecting probabilistic events
into the otherwise continuous dynamics. This hybrid approach allows SPARCED to
model both population-level trends and cell-to-cell variability with high
fidelity.


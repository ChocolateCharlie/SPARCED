# Installation of the Development Environment

Installation guide for developers


## Developer's Installation Guide

### Ubuntu-based Installation

The ` requirements.txt` file provided in the project root directory is an executable BASH script designed to install SPARCED dependencies in Ubuntu 22.04. Installation is seamless when using the `requirements.txt` file, which is reliant on a [PEP 621 - adherent](https://peps.python.org/pep-0621/) `pyproject.toml` file located adjacently in the project root directory.

To install, execute the following commands within the SPARCED root directory:

```bash
chmod +x ./requirements.txt # provides authorized installation access
./requirements.txt # Installation command
```

After installation is complete, restart your shell for the changes to take effect.

#### Installation verification

After installation is complete, test the installation via:

```bash
sparced -h
```

⚠️ Note: Ubuntu users might have to restart their shell session for the changes to take effect. ⚠️

Correct installation should output the following help information:

```
usage: SPARCED [-h] {compile,simulate,validate} ...

SPARCED CLI tool.

positional arguments:
  {compile,simulate,validate}
                        Subcommands: compile, simulate, validate, visualize
    compile             Compile a model.
    simulate            Run a simulation.
    validate            Benchmark a model.
    visualize           Visualize a dataset.

options:
  -h, --help            show this help message and exit
```

### Anaconda-based Installation

For further support, an Anaconda `environment.yml` is provided. Note, installation via Anaconda inhibits the use of the command line functionality. Individual scripts are still executable, an example is provided below.

```
# Send critical install variables to the .bashrc file:
export BLAS_LIBS=-lopenblas

# Install necessary SPARCED dependencies
sudo apt install -y openmpi-bin openmpi-common libopenmpi-dev \
		gcc libopenblas-dev g++ cmake make python3-pip pipx \
		libgfortran5 libatomic1 swig libhdf5-dev libsbml-dev

# Installs python dependencies to run the SPARCED-tools 
conda env create -f environment.yml

# Activate the conda environment
source activate sparced

```

Congratulations! You now have a full setup of SPARCED! 🦠

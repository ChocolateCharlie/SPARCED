#!/usr/bin/env python
# -*- coding: utf-8 -*-

from typing import IO

import numpy as np

import constants as const


def antimony_define_compartments(file: IO[str],
                                 compartments: dict[str, str]) -> None:
    """Write compartments names in the given Antimony file

    Note:
        The dictionnary is structured as key: compartment name / value:
        compartment volume.

    Arguments:
        file: The open Antimony file.
        compartments: Content of the input compartments file structured
                      as specified in the __Note__ section.

    Returns:
        Nothing.
    """

    file.write("# Compartments:\n")
    for k in compartments.keys():
        file.write(f"Compartment {k}; ")
    file.write("\n")

def antimony_define_species(file: IO[str], species: np.ndarray) -> None:
    """Write species names and affiliated compartments in the given
       Antimony file

    Note:
        First row is considered as a header, and hence it is skipped.
        First column of the array should contain species names.
        Second column of the array should contain species compartments.

    Argurments:
        file: The open Antimony file.
        species: Content of the input species file structured as
                 specified in the __Note__ section.

    Returns:
        Nothing.
    """

    file.write("# Species:\n")
    for i, value in enumerate(species[1:]):
        # Name is stored in value[0]
        # Compartment is stored in value[1]
        file.write(f"Species {value[0]} in {value[1]};\n")
    file.write("\n")

def antimony_define_units(file: IO[str]) -> None:
    """Write unit definitions in the given Antimony file

    Arguments:
        f_antimony: The open Antimony file.

    Returns:
        Nothing.
    """

    file.write("# Unit definitions:\n")
    file.write(f"  unit time_unit = {const.UNIT_TIME};\n")
    file.write(f"  unit volume = {const.UNIT_VOLUME};\n")
    file.write(f"  unit substance = {const.UNIT_SUBSTANCE};\n")
    file.write(f"  unit nM = {const.UNIT_DEF_NM};\n\n")

#!/usr/bin/env python
# -*- coding: utf-8 -*-

from diagrams import Cluster, Diagram, Edge
from diagrams.custom import Custom
from diagrams.programming.flowchart import Document
from diagrams.programming.flowchart import MultipleDocuments
from diagrams.programming.flowchart import StoredData
from diagrams.programming.language import Cpp
from diagrams.programming.language import Python


with Diagram("Compilation Pipeline", direction = "TB", filename="compilation_diagram", outformat="jpg", show=False):

    with Cluster("SPARCED input files entry point", direction="TB"):
        input_files = MultipleDocuments("SPARCED Input Files")
        model_object = StoredData("Sparced.Model instance")
        f_create_model = Python("create_model()")
        with Cluster("Antimony scripts"):
            f_antimony_create_file = Python("antimony_create_file()")

    with Cluster("Antimony entry point", direction="TB"):
        antimony_file = Custom("Antimony File", "./logos/tellurium.png")
        f_convert_antimony_to_sbml = Python("convert_antimony\n_to_sbml()")
        f_sbml_annotate_model = Python("sbml_annotate\n_model()")

    with Cluster("SBML entry point", direction="TB"):
        sbml_file = Custom("SBML File", "./logos/sbml.jpeg")
        amici_folder = Custom("", "./logos/amici.png")
        compiled_model = MultipleDocuments("Compiled model folder")
        f_convert_sbml_to_amici = Python("convert_sbml_\nto_amici()")

    input_files >> f_create_model >> model_object >> f_antimony_create_file
    antimony_file >> f_convert_antimony_to_sbml >> Edge(label="optional", color="gray", style="dashed", minlen="2") >> f_sbml_annotate_model
    model_object >> Edge(color="gray", style="dashed") >> f_sbml_annotate_model
    sbml_file >> f_convert_sbml_to_amici >> amici_folder >> compiled_model


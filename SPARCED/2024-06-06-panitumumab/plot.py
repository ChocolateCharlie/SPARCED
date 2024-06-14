#!/usr/bin/env python
# -*- coding: utf-8 -*-

# Panitumumab figures script

# Read data
import csv
import pandas as pd
# Plot results
import matplotlib as mpl
import matplotlib.pyplot as plt
from matplotlib.ticker import MultipleLocator, FormatStrFormatter, MaxNLocator


def read_data(f):
    data = pd.read_csv(f, header=0, sep='\t')
    del data[data.columns[0]]   # Drop index
    return(data)

def read_time(f):
    with open(f, 'r') as f:
        t = f.read()
        time = t.split("\t")
        time.pop(-1) # Remove final ''
        time = [float(ele) / 3600.0 for ele in time]
    return(time)


if __name__ == '__main__':
    # Load data
    print("Loading data...")
    time = read_time("panit_EC_0_nM_T_0.txt")
    control = read_data("panit_EC_0_nM_S_0.txt")
    dose_3 = read_data("panit_EC_0_001_nM_S_0.txt")
    dose_2 = read_data("panit_EC_0_01_nM_S_0.txt")
    dose_1 = read_data("panit_EC_0_1_nM_S_0.txt")
    dose_0 = read_data("panit_EC_1_nM_S_0.txt")

    # General settings
    mpl.rcParams['pdf.fonttype'] = 42
    mpl.rcParams['ps.fonttype'] = 42
    mpl.rcParams['font.family'] = 'sans-serif'
    mpl.rcParams['font.sans-serif'] = 'Arial'

    # Plot
    print("Ready to plot.")
    plot_loop = True
    while plot_loop:
        compound = input("Enter compound (see species list) or type \"STOP\" : ")
        if compound != "STOP":
            fig = plt.figure(figsize=(10,6))
            ax = plt.axes((0.15, 0.15, 0.5, 0.8))
            ax.spines['top'].set_visible(False)
            ax.spines['right'].set_visible(False)
            ax.tick_params(axis='x', which='major', pad=5, labelsize=12)
            ax.tick_params(axis='y', which='major', pad=5, labelsize=12)
            ax.xaxis.set_major_locator(MultipleLocator(4))
            ax.xaxis.set_minor_locator(MultipleLocator(1))
            l_control = ax.plot(time, control[compound], linestyle='-', linewidth=3, color="black")
            l_dose_3 = ax.plot(time, dose_3[compound], linestyle='-', linewidth=3, color="blue")
            l_dose_2 = ax.plot(time, dose_2[compound], linestyle='-', linewidth=3, color="green")
            l_dose_1 = ax.plot(time, dose_1[compound], linestyle='-', linewidth=3, color="orange")
            l_dose_0 = ax.plot(time, dose_0[compound], linestyle='-', linewidth=3, color="red")
            ax.legend(handles=[l_control[0], l_dose_3[0], l_dose_2[0], l_dose_1[0], l_dose_0[0]], labels=['Control (0 nM)', 'Panitumumab 1E-3 nM', 'Panitumumab 1E-2 nM', 'Panitumumab 1E-1 nM', 'Panitumumab 1 nM'], loc='upper left', bbox_to_anchor=(1,1), title="Legend")
            ax.set_xlabel('Time (h)', labelpad=10, fontsize=15)
            ax.set_ylabel('Concentration (nM)', labelpad=10, fontsize=15)
            plt.title(compound, fontdict={'fontsize': 15})
            plt.savefig(compound, format='jpeg')
            plt.show()
        else:
            plot_loop = False
    print("Termination")

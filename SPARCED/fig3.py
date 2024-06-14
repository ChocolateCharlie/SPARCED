#!/usr/bin/env python
# -*- coding: utf-8 -*-

# TDM1
# Reproduce figure 3 plots

# Read data
import csv
import pandas as pd
# Plot results
import matplotlib as mpl
import matplotlib.pyplot as plt
from matplotlib.ticker import MultipleLocator, FormatStrFormatter, MaxNLocator


def create_new_figure():
    fig = plt.figure(figsize=(10,6))
    ax = plt.axes((0.15, 0.15, 0.5, 0.8))
    ax.spines['top'].set_visible(False)
    ax.spines['right'].set_visible(False)
    ax.tick_params(axis='x', which='major', pad=5, labelsize=12)
    ax.tick_params(axis='y', which='major', pad=5, labelsize=12)
    ax.xaxis.set_major_locator(MultipleLocator(4))
    ax.xaxis.set_minor_locator(MultipleLocator(1))
    plt.yscale('log')
    ax.set_xlabel('Time (h)', labelpad=10, fontsize=15)
    ax.set_ylabel('Concentration (nM)', labelpad=10, fontsize=15)
    plt.title('SPARCED', fontdict={'fontsize': 15})
    return fig, ax

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
    tDM1 = read_data("tDM1_30_dose_S_0.txt")
    time = read_time("tDM1_30_dose_T_0.txt")

    # General settings
    mpl.rcParams['pdf.fonttype'] = 42
    mpl.rcParams['ps.fonttype'] = 42
    mpl.rcParams['font.family'] = 'sans-serif'
    mpl.rcParams['font.sans-serif'] = 'Arial'

    # Total intracellular DM1
    fig1, ax1 = create_new_figure()
    p = ax1.plot(time, tDM1['DM1_endo']+tDM1['DM1_IC']+tDM1['trast_DM1_E2_endo'], linestyle='-', color='green', linewidth=3)
    ax1.legend(handles=[p[0]], labels=['Total intracellular DM1'], loc='upper left', bbox_to_anchor=(1,1))
    plt.savefig('SPARCED-total-IC-DM1', format='jpeg')
    plt.show()
    # Conjugated intracellular DM1
    fig2, ax2 = create_new_figure()
    p = ax2.plot(time, tDM1['trast_DM1_E2_endo'], linestyle='-', color='orange', linewidth=3)
    ax2.legend(handles=[p[0]], labels=['Conjugated intracellular DM1'], loc='upper left', bbox_to_anchor=(1,1))
    plt.savefig('SPARCED-conj-IC-DM1', format='jpeg')
    plt.show()
    # Unconjugated intracellular DM1
    fig3, ax3 = create_new_figure()
    p = ax3.plot(time, tDM1['DM1_endo']+tDM1['DM1_IC'], linestyle='-', color='red', linewidth=3)
    ax3.legend(handles=[p[0]], labels=['Unconjugated intracellular DM1'], loc='upper left', bbox_to_anchor=(1,1))
    plt.savefig('SPARCED-unconj-IC-DM1', format='jpeg')
    plt.show()
    # Unconjugated extracellular DM1
    fig4, ax4 = create_new_figure()
    p = ax4.plot(time, tDM1['DM1_EC'], linestyle='-', color='cyan', linewidth=3)
    ax4.legend(handles=[p[0]], labels=['Unconjugated extracellular DM1'], loc='upper left', bbox_to_anchor=(1,1))
    plt.savefig('SPARCED-unconj-EC-DM1', format='jpeg')
    plt.show()
    # Total unconjugated DM1
    fig5, ax5 = create_new_figure()
    p = ax5.plot(time, tDM1['DM1_EC']+tDM1['DM1_endo']+tDM1['DM1_IC'], linestyle='-', color='blue', linewidth=3)
    ax5.legend(handles=[p[0]], labels=['Total unconjugated DM1'], loc='upper left', bbox_to_anchor=(1,1))
    plt.savefig('SPARCED-total-unconj-DM1', format='jpeg')
    plt.show()

    print("Process terminated")

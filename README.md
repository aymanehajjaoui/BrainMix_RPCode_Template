# BrainMix_RPCode_Template

This repository contains the C/C++ code template for the BrainMix project running on RedPitaya.  
It provides a modular and multithreaded base structure for real-time data acquisition, CNN-based signal processing, and DAC output.

## 🧠 Project Overview

BrainMix is designed to:
- Acquire interferometric signals in real-time from RedPitaya ADCs
- Process the signals using a CNN model (velocity prediction, etc.)
- Output results via DAC or CSV
- Use a modular, thread-based architecture per channel (CH1 & CH2)

## 📁 Folder Structure

<pre lang="markdown"> ## 📁 Folder Structure ``` BrainMix_RPCode_Template/ ├── CMSIS/ # CMSIS-NN and DSP libraries (ARM-optimized) │ ├── NN/ │ │ ├── Source/ # CNN layers (fully connected, convolution, activation) │ │ └── Include/ # NN headers │ ├── DSP/Include/ # DSP math types │ └── Core/Include/ # CMSIS core headers │ ├── include/ # Project header files │ ├── Common.hpp │ ├── DAC.hpp │ ├── DataAcquisition.hpp │ ├── DataWriter.hpp │ ├── ModelProcessing.hpp │ ├── ModelWriter.hpp │ └── SystemUtils.hpp │ ├── src/ # Source code (.cpp) │ ├── Common.cpp │ ├── DAC.cpp │ ├── DataAcquisition.cpp │ ├── DataWriter.cpp │ ├── ModelProcessing.cpp │ ├── ModelWriter.cpp │ ├── SystemUtils.cpp │ └── main.cpp │ ├── Makefile # Cross-compilation rules ├── plot.py # Optional Python plot script (e.g., for .csv results) ├── README.md ``` </pre>

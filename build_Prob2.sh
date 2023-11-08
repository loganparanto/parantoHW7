#!/bin/bash

# Compile the program
g++ -o myBlink myBlink.cpp derek_LED_Prob2.cpp

# Check for compilation errors
if [ $? -eq 0 ]; then
	echo "Compilation successful. You can run the program using: ./myBlink blink <LED_PIN> <num_times>"
else
	echo "Compilation failed. Check for errors in your code."
fi

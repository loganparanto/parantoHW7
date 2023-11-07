#!/bin/bash

# Compile the program
g++ -o myApp myApp.cpp derek_LED.cpp

# Check for compilation errors
if [ $? -eq 0 ]; then
	echo "Compilation successful. You can run the program using: ./myApp <command>"
else
	 echo "Compilation failed. Check for errors in your code."
fi

#!/bin/bash

g++ -o bankApp bankApp.cpp

if [ $? -eq 0 ]; then
	echo "Compilation successful. You can run the program using: ./bankApp"
else 
	echo "Compilation failed. Check for errors in your code."
fi

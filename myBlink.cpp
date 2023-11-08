// myBlink.cpp
#include "derek_LED_Prob2.h"
#include <iostream>
#include <cstdlib> // For atoi function

int main(int argc, char* argv[]) {
	if (argc != 3) {
		std::cerr << "Usage: " << argv[0] << " blink <LED_PIN> <num_times>" << std::endl;
		return 1;
	}

	int ledPin = std::stoi(argv[1]);
	int numTimes = std::stoi(argv[2]);
	LED led(ledPin);

	std::cout << "Blinking LED " << ledPin << " " << numTimes << " times..." << std::endl;
	led.blink(numTimes);

	return 0;
}

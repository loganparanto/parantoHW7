// derek_LED.cpp
#include "derek_LED_Prob2.h"
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>

LED::LED(int pin) : pin(pin) {
}

void LED::turnOn() {
	std::string ledPath = "/sys/class/leds/beaglebone:green:usr" + std::to_string(pin) + "/brightness";
	std::ofstream ledFile(ledPath.c_str());
	ledFile << "1";
	ledFile.close();
}

void LED::turnOff() {
	std::string ledPath = "/sys/class/leds/beaglebone:green:usr" + std::to_string(pin) + "/brightness";
	std::ofstream ledFile(ledPath.c_str());
	ledFile << "0";
	ledFile.close();
}

void LED::blink(int num) {
	for (int i=0; i<num; i++) {
	 turnOn();
	 sleep(1);
	 turnOff();
	 sleep(1);
}
}

void LED::outputState() {
	std::string ledPath = "/sys/class/leds/beaglebone:green:usr" + std::to_string(pin) + "/trigger";
	std::ifstream ledFile(ledPath.c_str());
	std::string state;
	getline(ledFile, state);
	std::cout << "LED " << pin << " state: " << state << std::endl;
	ledFile.close();
}

LED::~LED() {
	std::cout << "destroying the LED with pin: " << pin << std::endl;
}
	 

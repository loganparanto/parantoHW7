// derek_LED.cpp
#include "derek_LED.h"
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>

LED::LED(int pin) : pin(pin) {
}

void LED::turnOn() {
}

void LED::turnOff() {
}

void LED::flash(const std::string& delayms) {
	 int delayTime = std::stoi(delayms);
	 turnOn();
	 sleep(1);
	 turnOff();
	 sleep(1);
}

void LED::outputState() {
}

LED::~LED() {
	std::cout << "destroying the LED with pin: " << pin << std::endl;
}
	 

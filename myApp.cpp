// myApp.cpp
#include "derek_LED.h"
#include <iostream>

int main(int argc, char* argv[]) {
	 if (argc != 2) {
		 std::cerr << "Usage: " << argv[0] << " <command>" << std::endl;
		 std::cerr << "   command is one of: on, off, flash, status" << std::endl;
		 std::cerr << " e.g. " << argv[0] << " flash" << std::endl;
		 return 1;
	 }

	 std::string cmd(argv[1]);
	 LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };

	 for (int i = 0; i <= 3; i++) {
		 if (cmd == "on")
			 leds[i].turnOn();
		 else if (cmd == "off")
			 leds[i].turnOff();
		 else if (cmd == "flash")
			 leds[i].flash("100");
		 else if (cmd == "status")
			 leds[i].outputState();
		 else {
			 std::cerr << "Invalid command!" << std::endl;
		 }
	 }

	 return 0;
}

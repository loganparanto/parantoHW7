// derek_LED.h
#ifndef DEREK_LED_H
#define DEREK_LED_H
#include <string> 

class LED {
	public:
		LED(int pin);
		void turnOn();
		void turnOff();
		void flash(const std::string& delayms);
		void outputState();
		~LED();
	private:
		int pin;
	};

#endif

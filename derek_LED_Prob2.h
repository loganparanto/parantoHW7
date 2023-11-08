// derek_LED.h
#ifndef DEREK_LED_H
#define DEREK_LED_H 

class LED {
	public:
		LED(int pin);
		void turnOn();
		void turnOff();
		void blink(int num);
		void outputState();
		~LED();
	private:
		int pin;
	};

#endif

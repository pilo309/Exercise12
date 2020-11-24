#pragma once
#include "Barmeter.h"
#include "TemperatureSensor.h"

class Thermometer
{
public:
	Thermometer();
	~Thermometer();
	void showTemperature();

private:
	TemperatureSensor tempSensor_;
	Barmeter barmeter_;
};



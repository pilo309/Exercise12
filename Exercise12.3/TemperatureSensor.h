#pragma once
#include "Led.h"

class TemperatureSensor
{
public:
	TemperatureSensor();
	~TemperatureSensor();
	double readTemperature();
};

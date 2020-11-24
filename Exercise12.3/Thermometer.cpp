#include "Thermometer.h"
#include <iostream>
using namespace std;

Thermometer::Thermometer()
{
}

Thermometer::~Thermometer()
{
}

void Thermometer::showTemperature()
{
	double temp = tempSensor_.readTemperature();
	barmeter_.on(temp - 21);
	cout << temp << endl;
}
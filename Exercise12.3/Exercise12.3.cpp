#include "Thermometer.h"
#include "Barmeter.h"
#include "Led.h"

#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>
#include <iostream>

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	/*
	
	Constructoren er en default-constructor, som blot opretter objektet.
	Metoden showTemperature() skal vise den målte temperatur på barmeteret. 
	
	Du vælger selv temperaturintervallet – dvs. hvilken temperatur der svarer til intet
	udslag (0 tændte LEDs), og hvilken temperatur der svarer til fuldt udslag (6
	tændte LEDs). Det anbefales dog, at du anvender maksimalt 1 grad per LED.
	
	*/
	while(!_kbhit())
	{
		Thermometer Test;
		Test.showTemperature();
	}

	return 0;
}
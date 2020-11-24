#include "Barmeter.h"

#include <stdio.h>

#pragma comment(lib, "RaspberryPI.lib")
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

/*

Constructoren skal initialisere arrayet (LD1 på plads 0, LD2 på plads 1 osv.) og
slukke alle LEDs.

Metoden on() skal tænde et antal LEDs svarende til værdien af parameteren
numberOfLeds og slukke resten. Hvis numberOfLeds < 0 tændes ingen LEDs,
hvis numberOfLeds > 6 tændes alle 6 LEDs. LD1 er den første der tændes osv.

Metoden allLedsOff() skal slukke alle LEDs.

Destructoren skal slukke alle LEDs.

*/
/*
	
	Constructoren skal initialisere arrayet (LD1 på plads 0, LD2 på plads 1 osv.) og
	slukke alle LEDs.

	*/

Barmeter::Barmeter()
{
	for (size_t i = 0; i < 6; i++)
		allLeds[i] = Led(i+1);
	
	allLedsOff();
}

Barmeter::~Barmeter()
{
	allLedsOff();
}


void Barmeter::on(int numberOfLeds)
{
	/*

	Metoden on() skal tænde et antal LEDs svarende til værdien af parameteren
	numberOfLeds og slukke resten. Hvis numberOfLeds < 0 tændes ingen LEDs,

	*/
	if (numberOfLeds > 6)
		numberOfLeds = 6;

	if (numberOfLeds < 0)
		numberOfLeds = 0;

	for (size_t i = 0; i < numberOfLeds; i++)
		allLeds[i].on(i);

	for (size_t i = numberOfLeds; i < 6; i++)
		allLeds[i].off();
}


void Barmeter::allLedsOff()
{
	for (size_t i = 0; i < 6; i++)
		allLeds[i].off();
}

#include "Led.h"
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <iostream>

/*

Exercise10.3 Klasse til styring af en LED på Raspberry Pi shield

Skriv en LED driver (header- og source-fil) med definition og implementering af
klassen Led. Klassen er givet ved UML klassediagram og beskrivelse her under.

*/


Led::Led(int id)
{

	//id_ = (6 >= id && 1 <= id ? id : 1);           //hvis id ikke er mindre eller lig 6 eller større eller lig 1
									// bliver den lig 1 som default

	if (6 >= id && 1 <= id)
		id_ = id;

	else
		id_ = 1;
}

void Led::on(int intensity)
{
	using namespace std;
	/*
	intensity = (100 >= intensity && 60 <= intensity ? intensity : 100);

	if (100 <= intensity)
	{
		ledOn(id_ != LD6 || 100);
		//cout << 100 << endl;
	}

	else if (60 >= intensity)
	{
		ledOn(id_, 60);
		//cout << 60 << endl;
	}

	else
	cout << intensity << endl;

	Wait(10);
	*/

	if (id_ != LD6 || intensity > 100)
		ledOn(id_);
	else if (intensity < 60)
		ledOn(id_, 60);
	else
		ledOn(id_, intensity);
}

void Led::off()
{
	ledOff(id_);
}



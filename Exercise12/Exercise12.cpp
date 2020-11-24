#include "Barmeter.h"
#include "Led.h"

#include <stdio.h>
#pragma comment(lib, "RaspberryPI.lib")
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>


/*

I exercise 10 og 11 lavede du de drivere (klasser) til komponenterne på Raspberry
Pi Shield. I dag skal du bruge nogle af disse drivere til at lave et Barmeter og
derefter anvende dette til at lave et Termometer

*/

int main(void)
{


	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	Barmeter Test;

	Test.allLedsOff();
	Test.on(2);

	return 0;
}
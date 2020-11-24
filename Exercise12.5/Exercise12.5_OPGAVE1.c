#include <stdio.h>

/*

Exercise12.5 Eksamensopgaver
L�s f�lgende opgaves�t (opgaveh�ftet findes under Litteratur p� Blackboard).
Reeksamen Jan15

OPGAVE 1 (20%)
Denne opgave skrives i C
I denne opgave skal du skrive et lille program, hvori en bruger skal indtaste et helt tal 
st�rre end 1. 
Hvis brugeren ikke indtaster et tal st�rre end 1, 
skal der udskrives en fejlmeddelelse og der startes forfra 
� dvs. at brugeren skal indtaste et nyt tal. 
Dette forts�ttes, s� l�nge brugeren ikke indtaster et korrekt tal. 
Efter at brugeren har indtastet et korrekt tal, skal programmet unders�ge, 
om det indtastede tal er et lige tal og udskrive svaret p� sk�rmen 
(et tal er lige, hvis 2 g�r op i tallet � dvs. at resten ved division med 2 er 0).
De relevante udskrifter er:

Besked til brugeren (tekst 1): "Indtast et helt tal > 1 : "
Fejlmeddelelse (tekst 2): "Du skal indtaste et tal > 1"
Udskrift hvis tallet er lige (tekst 3): "Tallet 64 er et lige tal"
Udskrift hvis tallet er ulige (tekst 4): "Tallet 37 er et ulige tal"

NB! Tallene 64 og 37 er blot eksempler � det skal selvf�lgelig v�re det tal, som brugeren har indtastet.

*/

int main(void)
{
	int tal;

	do
	{
		printf_s("Indtast venligst helt tal over 1: \n");
		scanf_s("%d",&tal);
		printf("\n");

		if (tal < 2)
			printf_s("Du indtastede ikke et tal > 1\n");

	} while (tal < 2);

	printf_s("Du indtastede tallet: %d\n",tal);

	if (tal % 2 == 0)
		printf("Tallet %d er et lige tal.\n", tal);

	if (tal % 2 == 1)
		printf("Tallet %d er et ulige tal.\n", tal);






	return 0;
}
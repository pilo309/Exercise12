
/*

OPGAVE 4 (10%)
Denne opgave skrives i C++
I denne opgave skal du skrive koden til en lille funktion, 
som kan gennemløbe et array med objekter af klassen Bankkonto 
og udskrive data for de konti, som har negativ saldo. 

Funktionen kan beskri-ves således:
void udskrivNegativeSaldoer( Bankkonto * arrayPtr, const int SIZE );

Parametre: En pointer til det array, som skal gennemløbes.
En integer med arraystørrelsen.
Returværdi: Ingen.
Beskrivelse: Funktionen skal gennemløbe arrayet. For hver konto (dvs. hver plads
i arrayet) undersøges, om saldoen er negativ. 
Hvis saldoen negativ, skal kontoens data (ejer, personnr, kontonr og saldo) udskrives. 

Er saldoen ikke negativ gøres intet.

a) Skriv koden til funktionen udskrivNegativeSaldoer().

*/

void udskrivNegativeSaldoer(Bankkonto* arrayPtr, const int SIZE);
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arrayPtr[i].getSaldo() < 0)
			arrayPtr[i].print();
	}


}
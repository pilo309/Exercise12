#include "Bankkonto.h"
#include "Person.h"

Bankkonto::Bankkonto(string navn, string personnr, int kontonr)
: ejer_(navn, personnr)
{
	if (1000 <= kontonr && kontonr <= 9999)
	{
		kontonr = kontonummer_;
		saldo_ = 0;
	}

	else
		exit(1);

}

void Bankkonto::indsaetBeloeb(double beloeb)
{
	if (beloeb > 0)
		beloeb += saldo_;
}

bool Bankkonto::haevBeloeb(double beloeb)
{
	if(beloeb > 0 && (saldo_ - beloeb) > -1000)

	return true;

	if(beloeb < 0 && (saldo_-beloeb)<-1000)
	return false;
}

double Bankkonto::getSaldo() const
{
	return saldo_;
}

void Bankkonto::print() const
{
	cout << ejer_.print();
	cout << "Kontonummer: " << kontonummer_ << endl;
	cout << "Saldo: " << saldo_ << endl;
}

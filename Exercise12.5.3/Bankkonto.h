#pragma once

#include "Person.h"
#include <iostream>

using namespace std;

class Bankkonto
{
public:

	Bankkonto(string navn, string personnr, int kontonr);
void indsaetBeloeb(double beloeb);
bool haevBeloeb(double beloeb);
double getSaldo() const;
void print() const;

private:
Person ejer_;
int kontonummer_;
double saldo_;
};

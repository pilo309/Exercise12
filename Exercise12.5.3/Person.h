#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person(string navn, string nummer);
	void Print(void) const; //er konstant da den ikke skal rettes herfra men kun læses
private:
	string navn_;
	string personnummer_;
};

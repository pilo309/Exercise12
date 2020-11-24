#pragma once
#include "Led.h"

class Barmeter
{
public:
	Barmeter();
	~Barmeter();
	
	void on(int numberOfLeds);
	void allLedsOff();

private:
	Led allLeds[6];
};



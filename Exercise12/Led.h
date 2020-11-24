#pragma once
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <iostream>

class Led
{
public:
	Led(int id = LD1);
	void on(int intensity=100);
	void off();

private:
	int id_;

};


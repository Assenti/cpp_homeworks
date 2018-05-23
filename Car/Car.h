#pragma once
#include "Engine.h"
#include "Body.h"
#include "Doors.h"
#include "Wheels.h"
#include<iostream>
class Car : public Body, public Doors, public Engine, public Wheels
{
private:
	std::string color;
	int price;
public:
	void info() override;
	//Input 1) body type 2) doors opening type 3) engine power in h/f 4) wheels size 5) color 6) price
	Car(std::string, std::string, int, int, std::string, int);
	~Car();
};


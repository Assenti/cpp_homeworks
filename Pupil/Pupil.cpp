#include "Pupil.h"



std::string Pupil::getName()
{
	return name;
}

int Pupil::getAge()
{
	return age;
}

double Pupil::getHeight()
{
	return height;
}

double Pupil::getWeight()
{
	return weight;
}

Pupil::Pupil(std::string _name, int _age, double _height, double _weight)
{
	name = _name;
	age = _age;
	height = _height;
	weight = _weight;
}


Pupil::~Pupil()
{
}

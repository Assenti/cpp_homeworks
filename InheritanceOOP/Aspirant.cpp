#include "Aspirant.h"

Aspirant::Aspirant(std::string name, std::string _scientific_work) : MyStudent(name)
{
	scientific_work = _scientific_work;
}

std::string Aspirant::getScientificWork()
{
	return scientific_work;
}

void Aspirant::info()
{
	std::cout << "I am aspirant, my name is " <<
		name << " and id is " << id <<
		". I have a scientific work: " << scientific_work << std::endl;
}


Aspirant::~Aspirant()
{
}

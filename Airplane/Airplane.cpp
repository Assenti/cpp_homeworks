#include "Airplane.h"

Capacity Airplane::getCapacity()
{
	return capacity;
}

void Airplane::setCapacity(int passengers, Airplane & plane)
{
	if (passengers <= 100)
	{
		plane.capacity = Small;
	}
	else if (passengers > 100 & passengers <= 250)
	{
		plane.capacity = Middle;
	}
	else if (passengers > 250 && passengers <= 500)
	{
		plane.capacity = Big;
	}
	else
	{
		cout << "There is no available planes with such volume" << endl;
	}
}

int Airplane::getPassengers()
{
	return passengers;
}

Airplane::Airplane()
{
}

Airplane::Airplane(int passengers, string type)
{
	this->passengers = passengers;
	this->type = type;
	Airplane::setCapacity(passengers, *(this));
}

Airplane::~Airplane()
{
}

void Airplane::setPassengers(int passengers)
{
	this->passengers = passengers;
}

string Airplane::getType()
{
	return type;
}

void Airplane::setType(string type)
{
	this->type = type;
}

bool Airplane::operator==(Airplane & plane)
{
	return this->type == plane.type;
}

Airplane & Airplane::operator++()
{
	++this->passengers;
	return *(this);
}

Airplane & Airplane::operator--()
{
	--this->passengers;
	return *(this);
}

bool Airplane::operator>(Airplane & other)
{
	return this->capacity > other.capacity;
}

bool Airplane::operator<(Airplane & other)
{
	return this->capacity < other.capacity;
}

ostream & operator<<(ostream & os, Airplane & plane)
{
	os << "Passengers: " << plane.passengers << " Plane type: " << plane.type 
		<< " Plane capacity: " << plane.getCapacity();
	return os;
}

istream & operator>>(istream & is, Airplane & plane)
{
	is >> plane.passengers >> plane.type;
	if (plane.passengers <= 100)
	{
		plane.capacity = Small;
	}
	else if (plane.passengers > 100 & plane.passengers <= 250)
	{
		plane.capacity = Middle;
	}
	else if (plane.passengers > 250 && plane.passengers <= 500)
	{
		plane.capacity = Big;
	}
	else { cout << "There is no available planes with such volume" << endl; }
	return is;
}

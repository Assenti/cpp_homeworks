#include "Circle.h"

Circle::Circle(int radius)
{
	this->radius = radius;
}

int Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

Circle::Circle()
{
}

double Circle::getCircleLength()
{
	return 3.14 * radius;
}

Circle::~Circle()
{
}

bool Circle::operator==(Circle & other)
{
	return this->radius == other.radius;
}

bool Circle::operator>(Circle & other)
{
	return this->getCircleLength() > other.getCircleLength();
}

bool Circle::operator<(Circle & other)
{
	return this->getCircleLength() < other.getCircleLength();
}

Circle & Circle::operator-=(int value)
{
	this->radius -= value;
	return *(this);
}

Circle & Circle::operator+=(int value)
{
	this->radius += value;
	return *(this);
}

ostream & operator<<(ostream & os, Circle & circle)
{
	os << "Radius: " << circle.getRadius() << " Circle length: " << circle.getCircleLength();
	return os;
}

istream & operator>>(istream & is, Circle & circle)
{
	is >> circle.radius;
	return is;
}

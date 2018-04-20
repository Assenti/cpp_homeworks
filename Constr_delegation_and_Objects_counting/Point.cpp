#include "Point.h"

Point::Point(int x)
{
	this->x = x;
	++counter;
}
Point::Point(int x, int y) : Point(x)
{
	this->y = y;
}
Point::Point(int x, int y, int z) : Point(x, y)
{
	this->z = z;
}
Point::~Point()
{
}
void Point::setX(int x)
{
	this->x = x;
}
int Point::getX()
{
	return x;
}
void Point::setY(int y)
{
	this->y = y;
}
int Point::getY()
{
	return y;
}
void Point::setZ(int z)
{
	this->z = z;
}
int Point::getZ()
{
	return z;
}
int Point::getCounter()
{
	return counter;
}
int Point::counter = 0;
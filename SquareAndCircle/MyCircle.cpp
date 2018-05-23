#include "MyCircle.h"

MyCircle::MyCircle(int _radius)
{
	radius = _radius;
}

void MyCircle::info()
{
	std::cout << "I am circle, my radius is " << radius << std::endl;
}


MyCircle::~MyCircle()
{
}

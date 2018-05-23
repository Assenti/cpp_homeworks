#include "MyPixel.h"

MyPixel::MyPixel(short x, short y)
{
	this->x = x;
	this->y = y;
}

void MyPixel::draw(const char sign)
{
	std::cout << sign;
}


MyPixel::~MyPixel()
{
}

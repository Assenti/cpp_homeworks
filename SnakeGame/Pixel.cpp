#include "Pixel.h"

Pixel::Pixel(short x, short y)
{
	this->x = x;
	this->y = y;
}

void Pixel::draw(const char & sign)
{
	gotoXY(x, y);
	std::cout << sign;
}

Pixel::Pixel()
{
}

Pixel::~Pixel()
{
}

bool Pixel::operator==(const Pixel & pixel) const
{
	return x == pixel.x && y == pixel.y;
}

void Pixel::gotoXY(short x, short y)
{
	COORD position = { x, y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, position);
}

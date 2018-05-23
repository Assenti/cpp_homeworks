#include "CircleInSquare.h"

CircleInSquare::CircleInSquare(int side, int radius) : Square(side), MyCircle(radius)
{
}

void CircleInSquare::info()
{
	std::cout << "Hello, i am Circle in the Square, my side is " <<
		side << " and my radius is " << radius << std::endl;
}


CircleInSquare::~CircleInSquare()
{
}

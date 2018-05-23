#include "Square.h"

Square::Square(int _side)
{
	side = _side;
}

void Square::info()
{
	std::cout << "I am square, my side is " << side << std::endl;
}

Square::~Square()
{
}

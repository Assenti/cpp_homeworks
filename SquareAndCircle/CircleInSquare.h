#pragma once
#include "MyCircle.h"
#include "Square.h"
#include "IDraw.h"
#include "MyPixel.h"
class CircleInSquare : public MyCircle, public Square, public IDraw, public MyPixel
{
public:
	CircleInSquare();
	~CircleInSquare();
};


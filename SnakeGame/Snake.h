#pragma once
#include "IDrawable.h"
class Snake : public IDrawable
{
public:
	enum Direction { Up, Down, Left, Right, Default };
	Direction direction;
	Snake();
	void move();
	void eat(Pixel pixel);
	bool willEatItself();
	void clear();
	~Snake();
};

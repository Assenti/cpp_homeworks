#include "Food.h"
#include "SnakeGame.h"

Food::Food()
{
	sign = '@';
	body.push_back({ 3, 3 });
}

void Food::regenerate()
{
	body[0] = { rand() % 18 + 2, rand() % 18 + 2 };
	for (Pixel & pixel : SnakeGame::getInstance().snake.body)
	{
		if (body[0] == pixel)
		{
			regenerate();
		}
	}
}

Food::~Food()
{
}

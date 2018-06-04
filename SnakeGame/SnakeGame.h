#pragma once
#include "Snake.h"
#include "Food.h"
#include "Wall.h"
#include "Drawer.h"
#include "GameSaver.h"
#include "GameSaver.h"
#include <fstream>

class SnakeGame
{
	enum State { Started, Playing, Pause, Quit };
	State state;
	Wall wall;
	SnakeGame();
public:
	Food food;
	Snake snake;
	static SnakeGame & getInstance()
	{
		static SnakeGame instance;
		return instance;
	}
	void play();
	bool snakeEatsFood();
	bool snakeCrushesIntoWall();
	~SnakeGame();
};


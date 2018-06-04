#pragma once
#include "SnakeGame.h"
#include <fstream>

class GameSaver
{
public:
	Snake * snake;
	Food * food;
	static void serialize();
	static void deserialize();
	GameSaver();
	~GameSaver();
};


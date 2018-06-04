#include "SnakeGame.h"

SnakeGame::SnakeGame()
{
	state = Started;
}

void SnakeGame::play()
{
	state = Playing;
	Drawer::initialDraw({ wall, food });
	GameSaver::deserialize();
	while (state == Playing)
	{
		snake.clear();
		if (_kbhit())
		{
			char action = _getch();
			switch (action)
			{
			case 'w':
				snake.direction = Snake::Up;
				break;
			case 's':
				snake.direction = Snake::Down;
				break;
			case 'a':
				snake.direction = Snake::Left;
				break;
			case 'd':
				snake.direction = Snake::Right;
				break;
			case 'p':
				system("pause");
				system("cls");
				Drawer::initialDraw({ wall, food });
				break;
			case 'q':
				GameSaver::serialize();
				state = Quit;
				system("cls");
				break;
			default:
				break;
			}
		}
		if (snake.willEatItself() || snakeCrushesIntoWall())
		{
			state = Quit;
			break;
		}
		if (snakeEatsFood())
		{
			snake.eat(food.body[0]);
			food.regenerate();
			food.draw();
		}
		Drawer::moveAndRedraw(snake);
		Sleep(100);
	}
	system("cls");
	Pixel::gotoXY(5, 5);
	std::cout 
		<< "Your score is: " 
		<< snake.body.size() - 1 
		<< std::endl;
	system("pause");
}

bool SnakeGame::snakeEatsFood()
{
	return (snake.body[0] == food.body[0]);
}

bool SnakeGame::snakeCrushesIntoWall()
{
	for (Pixel & pixel : wall.body) {
		if (pixel == snake.body[0])
		{
			return true;
		}
	}
	return false;
}

SnakeGame::~SnakeGame()
{
}

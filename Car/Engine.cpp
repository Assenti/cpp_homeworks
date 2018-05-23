#include "Engine.h"



void Engine::info()
{
	std::cout << "Engine's power (h/f): " << power << std::endl;
}

Engine::Engine(int _power)
{
	power = _power;
}


Engine::~Engine()
{
}

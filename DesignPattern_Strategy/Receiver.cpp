#include "Receiver.h"

void Receiver::useStrategy()
{
	strategy->use();
}

int Receiver::getChosenStrategyId()
{
	return chosenStrategyId;
}

void Receiver::setStrategy(Strategy * _strategy)
{
	strategy = _strategy;
}

Receiver::Receiver()
{
}

Receiver::~Receiver()
{
}

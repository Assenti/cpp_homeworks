#include "Receiver.h"

void Receiver::useStrategy()
{
	strategy->use();
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

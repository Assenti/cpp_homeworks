#include "Receiver.h"



void Receiver::useStrategy()
{
	
}

void Receiver::setStrategy(Strategy * s)
{
	strategy = s;
}

void Receiver::getType(std::string s)
{
	try
	{
		std::stoi(s);
		setStrategy(new StrategyOne());
	}
	catch (const std::exception & exc)
	{
		setStrategy(new StrategyTwo());
	}
}

Receiver::Receiver()
{
}


Receiver::~Receiver()
{
}

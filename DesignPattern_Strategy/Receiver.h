#pragma once
#include <string>
#include "ContextManager.h"
#include "StrategyOne.h"
#include "StrategyTwo.h"

class Receiver : public ContextManager
{
private:
	int chosenStrategyId;
public:
	void setStrategy(Strategy *) override;
	void useStrategy() override;
	int getChosenStrategyId();
	template<typename T> Strategy * getType(T);
	Receiver();
	~Receiver();
};

template<typename T>
inline Strategy * Receiver::getType(T type)
{
	if (typeid(type) == typeid(const char*)) //const char * - as string
	{
		strategy = new StrategyOne();
		chosenStrategyId = 1;
	}
	else if (typeid(type) == typeid(int))
	{
		strategy = new StrategyTwo();
		chosenStrategyId = 2;
	}
	else
		std::cout << "Type is not provided\n";
	return strategy;
}

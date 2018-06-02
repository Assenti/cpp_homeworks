#pragma once
#include <string>
#include <exception>
#include "ContextManager.h"
#include "MyException.h"
#include "StrategyOne.h"
#include "StrategyTwo.h"

class Receiver : public ContextManager
{
public:
	void setStrategy(Strategy *) override;
	void useStrategy() override;
	template<typename T> Strategy * getType(T);
	Receiver();
	~Receiver();
};

template<typename T>
inline Strategy * Receiver::getType(T type)
{
	if (typeid(type) == typeid(const char*)) //const char * - as string
		strategy = new StrategyOne();
	else if (typeid(type) == typeid(int))
		strategy = new StrategyTwo();
	else
		throw MyException("Type is not provided");
	return strategy;
}

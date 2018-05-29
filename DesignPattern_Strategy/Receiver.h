#pragma once
#include "ContextManager.h"
#include <string>
#include <exception>
#include "StrategyOne.h"
#include "StrategyTwo.h"
class Receiver :
	public ContextManager
{
public:
	void useStrategy() override;
	void setStrategy(Strategy *) override;
	void getType(std::string);
	Receiver();
	~Receiver();
};


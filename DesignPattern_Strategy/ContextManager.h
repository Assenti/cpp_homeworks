#pragma once
#include "Strategy.h"
class ContextManager
{
protected:
	Strategy * strategy;
public:
	virtual void useStrategy() = 0;
	virtual void setStrategy(Strategy *) = 0;
	ContextManager();
	virtual ~ContextManager();
};


#pragma once
#include "Strategy.h"
#include <iostream>
class StrategyOne :
	public Strategy
{
public:
	void use() override;
	StrategyOne();
	~StrategyOne();
};


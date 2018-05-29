#pragma once
#include "Strategy.h"
#include <iostream>
class StrategyTwo :
	public Strategy
{
public:
	void use() override;
	StrategyTwo();
	~StrategyTwo();
};


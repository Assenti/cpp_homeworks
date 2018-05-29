#pragma once
class Strategy
{
public:
	Strategy();
	virtual void use() = 0;
	virtual ~Strategy();
};


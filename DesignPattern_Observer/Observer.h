#pragma once
class Observer
{
public:
	int id;
	virtual void handleEvent() = 0;
	Observer();
	virtual ~Observer();
};


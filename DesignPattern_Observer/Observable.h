#pragma once
#include "Observer.h"
class Observable
{
public:
	virtual void addObserver(Observer * observer) = 0;
	virtual void removeObserver(Observer * observer) = 0;
	virtual void notifyObservers() = 0;
	Observable();
	virtual ~Observable();
};


#pragma once
#include "Observer.h"
#include "Observable.h"
#include <iostream>
class ConcreteObserver : public Observer
{
public:
	void handleEvent() override;
	ConcreteObserver();
	~ConcreteObserver();
};


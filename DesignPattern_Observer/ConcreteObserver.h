#pragma once
#include "Observer.h"
#include "Observable.h"
#include <iostream>
class ConcreteObserver : public Observer
{
public:
	Observable * observable;
	void handleEvent() override;
	ConcreteObserver();
	~ConcreteObserver();
};


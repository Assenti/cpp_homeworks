#include "ConcreteObservable.h"

void ConcreteObservable::addObserver(Observer * observer)
{
	observer->id = observers.size();
	observers.push_back(observer);
}

void ConcreteObservable::removeObserver(Observer * observer)
{
	for (auto item : observers)
	{
		if (item->id == observer->id)
		{
			observers.erase(observers.begin() + observer->id);
		}
	}
}

void ConcreteObservable::notifyObservers()
{
	for (auto item : observers)
	{
		item->handleEvent();
	}
}

ConcreteObservable::ConcreteObservable()
{
}


ConcreteObservable::~ConcreteObservable()
{
}

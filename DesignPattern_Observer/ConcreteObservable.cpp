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

size_t ConcreteObservable::count()
{
	return observers.size();
}

ConcreteObservable::ConcreteObservable()
{
}


ConcreteObservable::~ConcreteObservable()
{
}

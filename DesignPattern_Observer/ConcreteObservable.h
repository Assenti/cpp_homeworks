#pragma once
#include "Observable.h"
#include <vector>
class ConcreteObservable : public Observable
{
public:
	std::vector<Observer *> observers;
	void addObserver(Observer * observer) override;
	void removeObserver(Observer * observer) override;
	void notifyObservers() override;
	size_t count() override;
	ConcreteObservable();
	~ConcreteObservable();
};


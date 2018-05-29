#include "ObserverAddCase.h"



void ObserverAddCase::setUp()
{
	publisher = new ConcreteObservable();
	subscriber1 = new ConcreteObserver();
	subscriber2  = new ConcreteObserver();
}

void ObserverAddCase::test()
{
	publisher->addObserver(subscriber1);
	assert(publisher->count() == 1);
	publisher->addObserver(subscriber2);
	assert(publisher->count() == 2);
}

void ObserverAddCase::clean()
{
	delete publisher;
	delete subscriber1;
	delete subscriber2;
}

ObserverAddCase::ObserverAddCase()
{
}


ObserverAddCase::~ObserverAddCase()
{
}

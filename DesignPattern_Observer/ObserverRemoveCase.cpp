#include "ObserverRemoveCase.h"


void ObserverRemoveCase::setUp()
{
	publisher = new ConcreteObservable();
	subscriber1 = new ConcreteObserver();
	publisher->addObserver(subscriber1);
}

void ObserverRemoveCase::test()
{
	publisher->removeObserver(subscriber1);
	assert(publisher->count() == 0);
}

void ObserverRemoveCase::clean()
{
	delete publisher;
	delete subscriber1;
}

ObserverRemoveCase::ObserverRemoveCase()
{
}


ObserverRemoveCase::~ObserverRemoveCase()
{
}

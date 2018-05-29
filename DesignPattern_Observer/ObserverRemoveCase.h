#pragma once
#include "CasesTest.h"
#include "Observable.h"
#include "ConcreteObservable.h"
#include "ConcreteObserver.h"
#include "ObserverAddCase.h"

class ObserverRemoveCase :
	public CasesTest
{
public:
	Observable * publisher;
	Observer * subscriber1, *subscriber2;
	void setUp() override;
	void test() override;
	void clean() override;
	ObserverRemoveCase();
	~ObserverRemoveCase();
};


#include<iostream>
#include "ConcreteObservable.h"
#include "ConcreteObserver.h"
#include "CasesTest.h"
#include "ObserverAddCase.h"
#include "ObserverRemoveCase.h"
#include "FunctionalTest.h"

int main()
{
	FunctionalTest testing;
	//testing.testCases.push_back(new ObserverAddCase());
	testing.testCases.push_back(new ObserverRemoveCase());
	testing.global_testing();

	system("pause");
	return 0;
}
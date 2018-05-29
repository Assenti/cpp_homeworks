#include "ConcreteObserver.h"



void ConcreteObserver::handleEvent()
{
	std::cout << "ConcreteObserver event handler was invoked" << std::endl;
}

ConcreteObserver::ConcreteObserver()
{
}


ConcreteObserver::~ConcreteObserver()
{
}

#include "Automat.h"

Automat::Automat(int n)
{
	count = n;
	waitingState = new WaitingState(this);
	gotApplicationState = new GotApplicationState(this);
	apartmentRentedState = new ApartmentRentedState(this);
	fullyRentedState = new FullyRentedState(this);
	state = waitingState;
}

void Automat::gotApplication()
{
	std::cout << state->gotApplication() << std::endl;
}

void Automat::checkApplication()
{
	std::cout << state->checkApplication() << std::endl;
}

void Automat::rentApartment()
{
	std::cout << state->rentApartment() << std::endl;
	std::cout << state->dispenseKeys() << std::endl;
}

void Automat::setState(IAutomatState * s)
{
	state = s;
}

IAutomatState * Automat::getWaitingState()
{
	return waitingState;
}

IAutomatState * Automat::getGotApplicationState()
{
	return gotApplicationState;
}

IAutomatState * Automat::getApartmentRentedState()
{
	return apartmentRentedState;
}

IAutomatState * Automat::getFullyRentedState()
{
	return fullyRentedState;
}


int Automat::getCount()
{
	return count;
}

void Automat::setCount(int _count)
{
	count = _count;
}

Automat::~Automat()
{
}

#include "FullyRentedState.h"



FullyRentedState::FullyRentedState(Automat * _automat)
{
	automat = _automat;
}

std::string FullyRentedState::gotApplication()
{
	return "Sorry, we're fully rented.";
}

std::string FullyRentedState::checkApplication()
{
	return "Sorry, we're fully rented.";
}

std::string FullyRentedState::rentApartment()
{
	return "Sorry, we're fully rented.";
}

std::string FullyRentedState::dispenseKeys()
{
	return "Sorry, we're fully rented.";
}


FullyRentedState::~FullyRentedState()
{
}

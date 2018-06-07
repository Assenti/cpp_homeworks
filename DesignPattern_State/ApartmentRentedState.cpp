#include "ApartmentRentedState.h"



ApartmentRentedState::ApartmentRentedState(Automat * _automat)
{
	automat = _automat;
}

std::string ApartmentRentedState::gotApplication()
{
	return "Hang on, we'ra renting you an apartment.";
}

std::string ApartmentRentedState::checkApplication()
{
	return "Hang on, we'ra renting you an apartment.";
}

std::string ApartmentRentedState::rentApartment()
{
	automat->setCount(automat->getCount() - 1);
	return "Renting you an apartment....";
}

std::string ApartmentRentedState::dispenseKeys()
{
	if (automat->getCount() <= 0)
		automat->setState(automat->getFullyRentedState());
	else
		automat->setState(automat->getWaitingState());
	return "Here are your keys!";
}


ApartmentRentedState::~ApartmentRentedState()
{
}

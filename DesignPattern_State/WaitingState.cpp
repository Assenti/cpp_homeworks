#include "WaitingState.h"

WaitingState::WaitingState(Automat * _automat)
{
	automat = _automat;
}

std::string WaitingState::gotApplication()
{
	automat->setState(automat->getGotApplicationState());
	return "Thanks for the application.";
}

std::string WaitingState::checkApplication()
{
	return "You have to submit an application.";
}

std::string WaitingState::rentApartment()
{
	return "You have to submit an application.";
}

std::string WaitingState::dispenseKeys()
{
	return "You have to submit an application.";
}

WaitingState::~WaitingState()
{
}

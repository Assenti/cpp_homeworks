#include "GotApplicationState.h"

GotApplicationState::GotApplicationState(Automat * _automat)
{
	automat = _automat;
	srand(time(0));
	random = rand() % 100;
}

std::string GotApplicationState::gotApplication()
{
	return "We already got your application.";
}

std::string GotApplicationState::checkApplication()
{
	int yesNo = random;

	if (yesNo > 4 && automat->getCount() > 0)
	{
		automat->setState(automat->getApartmentRentedState());
		return "Congratulations, you were approved.";
	}
	else
	{
		automat->setState(automat->getWaitingState());
		return "Sorry, you were not approved.";
	}
}

std::string GotApplicationState::rentApartment()
{
	return "You must have your application checked.";
}

std::string GotApplicationState::dispenseKeys()
{
	return "You must have your application checked.";
}


GotApplicationState::~GotApplicationState()
{
}

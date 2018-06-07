#pragma once
#include "IAutomatState.h"
class IAutomat
{
protected:
	int count;
public:
	virtual void gotApplication() = 0;
	virtual void checkApplication() = 0;
	virtual void rentApartment() = 0;

	virtual void setState(IAutomatState * s) = 0;
	virtual IAutomatState * getWaitingState() = 0;
	virtual IAutomatState * getGotApplicationState() = 0;
	virtual IAutomatState * getApartmentRentedState() = 0;
	virtual IAutomatState * getFullyRentedState() = 0;

	virtual int getCount() = 0;
	virtual void setCount(int) = 0;

	IAutomat();
	virtual ~IAutomat();
};


#pragma once
#include <iostream>
#include "IAutomat.h"
#include "AutomatState.h"
#include "WaitingState.h"
#include "GotApplicationState.h"
#include "ApartmentRentedState.h"
#include "FullyRentedState.h"
class Automat :	public IAutomat
{
private:
	IAutomatState * waitingState;
	IAutomatState * gotApplicationState;
	IAutomatState * apartmentRentedState;
	IAutomatState * fullyRentedState;
	IAutomatState * state;
public:
	Automat(int);
	void gotApplication() override final;
	void checkApplication() override final;
	void rentApartment() override final;
	void setState(IAutomatState * s);
	IAutomatState * getWaitingState();
	IAutomatState * getGotApplicationState();
	IAutomatState * getApartmentRentedState();
	IAutomatState * getFullyRentedState();
	int getCount() override final;
	void setCount(int) override final;
	~Automat();
};


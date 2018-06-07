#pragma once
#include "IAutomatState.h"
#include "Automat.h"

class ApartmentRentedState :
	public IAutomatState
{
private:
	Automat * automat;
public:
	ApartmentRentedState(Automat *);
	std::string gotApplication() override final;
	std::string checkApplication() override final;
	std::string rentApartment() override final;
	std::string dispenseKeys() override final;
	~ApartmentRentedState();
};


#pragma once
#include "IAutomatState.h"
#include "Automat.h"
class FullyRentedState :
	public IAutomatState
{
private:
	Automat * automat;
public:
	FullyRentedState(Automat *);
	std::string gotApplication() override final;
	std::string checkApplication() override final;
	std::string rentApartment() override final;
	std::string dispenseKeys() override final;
	~FullyRentedState();
};


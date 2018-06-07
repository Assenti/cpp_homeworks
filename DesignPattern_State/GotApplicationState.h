#pragma once
#include <ctime>
#include "IAutomatState.h"
#include "Automat.h"
class GotApplicationState :
	public IAutomatState
{
private:
	Automat * automat;
	int random;
public:
	GotApplicationState(Automat *);
	std::string gotApplication() override final;
	std::string checkApplication() override final;
	std::string rentApartment() override final;
	std::string dispenseKeys() override final;
	~GotApplicationState();
};


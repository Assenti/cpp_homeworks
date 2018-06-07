#pragma once
#include "IAutomatState.h"
class AutomatState :
	public IAutomatState
{
public:
	std::string gotApplication();
	std::string checkApplication();
	std::string rentApartment();
	std::string dispenseKeys();
	AutomatState();
	~AutomatState();
};


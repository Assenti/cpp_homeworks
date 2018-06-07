#pragma once
#include <string>
class IAutomatState
{
public:
	virtual std::string gotApplication() = 0;
	virtual std::string checkApplication() = 0;
	virtual std::string rentApartment() = 0;
	virtual std::string dispenseKeys() = 0;
	IAutomatState();
	virtual ~IAutomatState();
};


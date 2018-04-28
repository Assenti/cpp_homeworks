#pragma once
#include <iostream>
#include <ostream>
#include <istream>
#include <string>
using namespace std;

enum Capacity { Big = 500, Middle = 250, Small = 100 };

class Airplane
{	
private:
	int passengers;
	Capacity capacity;
	string type;
public:
	Airplane();
	explicit Airplane(int, string);
	Capacity getCapacity();
	void setCapacity(int, Airplane &);
	int getPassengers();
	void setPassengers(int);
	string getType();
	void setType(string);
	~Airplane();
	//Compare planes by type
	bool operator == (Airplane &);
	//Increase passengers
	Airplane & operator++ ();
	//Decrease passengers
	Airplane & operator-- ();
	//Compare planes by capacity
	bool operator > (Airplane &);
	//Compare planes by capacity
	bool operator < (Airplane &);
	friend ostream & operator <<(ostream &, Airplane &);
	friend istream & operator >>(istream &, Airplane &);
};


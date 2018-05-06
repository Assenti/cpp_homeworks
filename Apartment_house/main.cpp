#include "Apartment.h"
#include <iostream>
using namespace std;

void valuesHandler(Apartment & ap)
{
	if (!ap.showAllApartmentTenants())
	{
		cout << "No values" << endl;
	}
	else
	{
		ap.showAllApartmentTenants();
	}
}

int main()
{
	Apartment one;
	one.addHumans("Billy", "Tornton");
	cout << "Obj one: " << "Apart #" << one.getNumber() << " ";
	one.showAllApartmentTenants();

	Apartment two = move(one);
	cout << "AFTER FIRST MOVING" << endl;
	cout << "Obj two: " << "Apart #" << two.getNumber() << " ";
	two.showAllApartmentTenants();
	cout << "Attempting to call Obj one" << endl;
	valuesHandler(one);

	Apartment three = move(two);
	cout << "AFTER SECOND MOVING" << endl;
	cout << "Obj three: " << "Apart #" << three.getNumber() << " ";
	three.showAllApartmentTenants();
	cout << "Attempting to call Obj two" << endl;
	valuesHandler(two);


	system("pause");
	return 0;
}

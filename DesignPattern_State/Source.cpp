#include "Automat.h"
#include "AutomatState.h"
#include "ApartmentRentedState.h"
#include "FullyRentedState.h"
#include "GotApplicationState.h"
#include "WaitingState.h"

int main()
{
	Automat automat(9);

	automat.gotApplication();
	automat.checkApplication();
	automat.rentApartment();

	system("pause");
	return 0;
}

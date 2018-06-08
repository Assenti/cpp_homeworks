#include "Automat.h"
#include "AutomatState.h"
#include "ApartmentRentedState.h"
#include "FullyRentedState.h"
#include "GotApplicationState.h"
#include "WaitingState.h"

int main()
{
	int submit_application = 1, non_submit_application = 0;

	Automat automat(submit_application);

	automat.gotApplication();
	automat.checkApplication();
	automat.rentApartment();


	system("pause");
	return 0;
}

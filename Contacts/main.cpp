#include "Phone.h"

int main()
{
	Phone &phone = Phone::getInstance();
	phone.addNewContact("Bob", 87775554422);
	phone.addNewContact("Ken", 87009008070);
	phone.addNewContact("Tim", 87001110101);
	phone.deleteContact("Bob");
	phone.showContacts();

	system("pause");
	return 0;
}
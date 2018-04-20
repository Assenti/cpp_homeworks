#include "Phone.h"

int main()
{
	Phone &phone = Phone::getInstance();
	phone.setPhoneName("Samsung");
	phone.addNewContact("Bob", 87775554422);
	phone.addNewContact("Ken", 87009008070);
	phone.addNewContact("Tim", 87001110101);
	phone.addNewContact("John", 87002225050);
	phone.deleteContact("Bob");
	phone.saveToFile();
	phone.readFromFile();


	system("pause");
	return 0;
}
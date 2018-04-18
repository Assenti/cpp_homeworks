#include "Group.h"

int main() 
{
	Group first;
	first.setGroupId("SEP-172.2");
	first.setGroupSubject("CPP");

	for (int i = 0; i < 3; i++)
	{
		first.addNewStudent();
		std::cout << "O.K." << std::endl;
	}

	first.displayAllStudentsInfo();
	std::cout << "Group Id: " << first.getGroupId() << std::endl;
	std::cout << "Group Subject: " << first.getGroupSubject() << std::endl;
	std::cout << "Average rating: " << first.getStudentsAverageRating() << std::endl;


	system("pause");
	return 0;
}
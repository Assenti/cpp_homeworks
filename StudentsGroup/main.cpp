#include "Group.h"
#include "Student.h"

int main() 
{
	Student one("Bob");
	std::cout << "BEFORE MOVE ACTIONS" << std::endl;
	std::cout << "Obj one: " << one.getName() << std::endl;
	Student two = std::move(one);
	std::cout << "\nAFTER MOVE ACTIONS" << std::endl;
	
	std::cout << "Obj two: " << two.getName() << std::endl;
	std::cout << "Obj one: " << one.getName() << std::endl;

	/*Group first;
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
	std::cout << "Average rating: " << first.getStudentsAverageRating() << std::endl;*/


	system("pause");
	return 0;
}
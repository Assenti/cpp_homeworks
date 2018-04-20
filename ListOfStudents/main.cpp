#include "ListOfStudents.h"

int main()
{
	ListOfStudents single = ListOfStudents::getInstance();
	single.addNewStudent("John", 10);
	single.addNewStudent("Brad", 5);
	single.addNewStudent("Peter", 7);
	single.addNewStudent("Mathew", 8);

	single.deleteStudent("Brad");

	single.showStudents();
	std::cout << "Average: " << single.getAverageGrade() << std::endl;
	std::cout << "Min: " << single.getMinGrade() << std::endl;
	std::cout << "Max: " << single.getMaxGrade() << std::endl;
	
	//single.sortStudentsByGradeAscending();
	single.sortStudentsByGradeDescendingly();
	single.showStudents();

	system("pause");
	return 0;
}
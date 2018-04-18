#include "Group.h"
#include "Student.h"
Group::Group()
{
}
Group::~Group()
{
}
int Group::students_counter = 0;
void Group::setGroupId(std::string _group_id)
{
	group_id = _group_id;
}
std::string Group::getGroupId()
{
	return group_id;
}
void Group::setGroupSubject(std::string _group_subject)
{
	group_subject = _group_subject;
}
std::string Group::getGroupSubject()
{
	return group_subject;
}
void Group::addNewStudent()
{
	std::string _name;
	int _age;
	double _rating;
	std::cout << "Input student's name: ";
	std::cin >> _name;
	std::cout << "Input student's age: ";
	std::cin >> _age;
	std::cout << "Input student's rating: ";
	std::cin >> _rating;
	students[students_counter].setName(_name);
	students[students_counter].setAge(_age);
	students[students_counter].setRating(_rating);
	++students_counter;
}
void Group::displayAllStudentsInfo()
{
	std::cout << "TOTAL NUMBER OF STUDENTS: " << students_counter << std::endl;
	for (int i = 0; i < students_counter; i++)
	{
		std::cout << "Student " << i+1 << ": " << "NAME: " << students[i].getName();
		std::cout << " AGE: " << students[i].getAge();
		std::cout << " RATING: " << students[i].getRating() << std::endl;
	}
}
void Group::displayGroupInfo()
{
	std::cout << "GROUP ID: " << group_id << std::endl;
	std::cout << "GROUP SUBJECT: " << group_subject << std::endl;
	std::cout << "STUDENTS AVERAGE RATING: " << students_average_rating << std::endl;
}
double Group::getStudentsAverageRating()
{
	double sum = 0;
	for (int i = 0; i < students_counter; i++)
	{
		sum += students[i].getRating();
	}
	students_average_rating = sum / students_counter;
	return students_average_rating;
}
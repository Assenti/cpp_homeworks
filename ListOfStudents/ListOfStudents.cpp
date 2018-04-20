#include "ListOfStudents.h"

ListOfStudents::ListOfStudents()
{
}
ListOfStudents::~ListOfStudents()
{
}
void ListOfStudents::addNewStudent(std::string name, int grade, int id)
{
	students.push_back(OtherStudent(name, grade, id));
}
void ListOfStudents::deleteStudent(std::string name)
{
	for (OtherStudent c : students)
	{
		int i = 0;
		if (c.getName() == name)
		{
			students.erase(students.begin() + i);
		}
		i++;
	}
}
double ListOfStudents::getAverageGrade()
{
	int sum = 0;
	for (OtherStudent c : students)
	{
		sum += c.getGrade();
	}
	return (sum / students.size());
}
int ListOfStudents::getMinGrade()
{
	int min = 10;
	for (OtherStudent c : students)
	{
		if (c.getGrade() < min)
		{
			min = c.getGrade();
		}
	}
	return min;
}

int ListOfStudents::getMaxGrade()
{
	int max = 0;
	for (OtherStudent c : students)
	{
		if (c.getGrade() > max)
		{
			max = c.getGrade();
		}
	}
	return max;
}

void ListOfStudents::sortStudentsByGradeAscending()
{
	for (int i = 0; i < students.size()-1; i++)
	{
		for (int j = 0; j < students.size() - i - 1; j++)
		{
			if (students[j].getGrade() > students[j + 1].getGrade())
			{
				std::iter_swap(students.begin()+j, students.begin()+(j+1));
			}
		}
	}
}

void ListOfStudents::sortStudentsByGradeDescendingly()
{
	for (int i = 0; i < students.size() - 1; i++)
	{
		for (int j = 0; j < students.size() - i - 1; j++)
		{
			if (students[j].getGrade() < students[j + 1].getGrade())
			{
				std::iter_swap(students.begin() + j, students.begin() + (j + 1));
			}
		}
	}
}

void ListOfStudents::showStudents()
{
	for (OtherStudent c : students)
	{
		std::cout << "ID: " << c.getId() << "NAME: " << c.getName() << " GRADE: " << c.getGrade() << std::endl;
	}
}



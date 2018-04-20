#pragma once
#include "OtherStudent.h"

class ListOfStudents
{
private:
	ListOfStudents();
	std::vector<OtherStudent> students;
public:
	static ListOfStudents & getInstance()
	{
		static ListOfStudents instance;
		return instance;
	}
	~ListOfStudents();
	void addNewStudent(std::string, int);
	void deleteStudent(std::string);
	double getAverageGrade();
	int getMinGrade();
	int getMaxGrade();
	void sortStudentsByGradeAscending();
	void sortStudentsByGradeDescendingly();
	void showStudents();
	//По позиции 5) задания:
	//Не возможно реализовать копию объекта, т.к. применен конструктор Singleton
};


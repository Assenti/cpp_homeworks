#pragma once
#include "Student.h"
#define STUDENTS_MAX 20
class Group
{
public:
	static int students_counter;
	std::string group_id, group_subject;
	double students_average_rating;
	Student * students = new Student[STUDENTS_MAX];
public:
	Group();
	~Group();
	//Getters&Setters
	void setGroupId(std::string _group_id);
	std::string getGroupId();
	void setGroupSubject(std::string _group_subject);
	std::string getGroupSubject();
	
	//Adding new student
	void addNewStudent();
	//Calculates average rating of students
	double getStudentsAverageRating();
	//Display info about all students
	void displayAllStudentsInfo();
	//Display info about group
	void displayGroupInfo();
};


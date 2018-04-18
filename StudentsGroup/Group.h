#pragma once
#include "Student.h"
class Group
{
public:
	static int counter;
	std::string group_id, group_subject;
	
public:
	Group();
	~Group();
	//Getters&Setters
	void setGroupId(std::string _group_id);
	std::string getGroupId();
	void setGroupSubject(std::string _group_subject);
	std::string getGroupSubject();
};


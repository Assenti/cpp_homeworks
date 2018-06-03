#pragma once
#include <vector>
#include <string>
#include <iostream>
class Document
{
private:
	std::vector <std::string> data;
public:
	Document();
	void insert(int, const std::string &);
	void remove(int);
	void show();
	~Document();
};


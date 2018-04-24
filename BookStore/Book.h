#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Book
{
private:
	string author, name, publisher;
	int year, pages;
public:
	Book();
	explicit Book(string, string, string, int, int);
	~Book();
	string getAuthor() const;
	void setAuthor(string);
	string getName() const;
	void setName(string);
	string getPublisher() const;
	void setPublisher(string);
	int getYear() const;
	void setYear(int);
	int getPages() const;
	void setPages(int);
};


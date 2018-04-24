#include "Book.h"

Book::Book()
{
}

Book::Book(string author, string name, string publisher, int year, int pages)
{
	this->author = author;
	this->name = name;
	this->publisher = publisher;
	this->year = year;
	this->pages = pages;
}
Book::~Book()
{
}
string Book::getAuthor() const
{
	return author;
}
void Book::setAuthor(string author)
{
	this->author = author;
}
string Book::getName() const
{
	return name;
}
void Book::setName(string name)
{
	this->name = name;
}

string Book::getPublisher() const
{
	return publisher;
}

void Book::setPublisher(string publisher)
{
	this->publisher = publisher;
}

int Book::getYear() const
{
	return year;
}

void Book::setYear(int year)
{
	this->year = year;
}

int Book::getPages() const
{
	return pages;
}

void Book::setPages(int pages)
{
	this->pages = pages;
}

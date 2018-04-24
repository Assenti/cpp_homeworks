#pragma once
#include "Book.h"

class Store
{
private:
	Store();
	vector<Book> books;
public:
	static Store & getInstance()
	{
		static Store instance;
		return instance;
	}
	~Store();
	void addBook(string, string, string, int, int);
	void showAllBooks() const;
	vector<Book> filterBooksByAuthor(string) const;
	vector<Book> filterBooksByPublisher(string) const;
	vector<Book> filetrBooksByYear(int) const;
	void showResultsOfFilter(vector<Book>);
};


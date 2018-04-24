#include "Store.h"

Store::Store()
{
}
Store::~Store()
{
}

void Store::addBook(string author, string name, string publisher, int year, int pages)
{
	books.push_back(Book(author, name, publisher, year, pages));
}

void Store::showAllBooks() const
{
	cout << "ALL BOOKS:" << endl;
	for (Book book : books)
	{
		cout << book.getAuthor() << " " << book.getName() << " " << book.getPublisher()
			<< " " << book.getYear() << " " << book.getPages() << endl;
	}
}

vector<Book> Store::filterBooksByAuthor(string author) const
{
	vector<Book> output;
	for (Book book : books)
	{
		if (book.getAuthor() == author)
		{
			output.push_back(book);
		}
	}
	return output;
}

vector<Book> Store::filterBooksByPublisher(string publisher) const
{
	vector<Book> output;
	for (Book book : books)
	{
		if (book.getPublisher() == publisher)
		{
			output.push_back(book);
		}
	}
	return output;
}

vector<Book> Store::filetrBooksByYear(int year) const
{
	vector<Book> output;
	for (Book book : books)
	{
		if (book.getYear() >= year)
		{
			output.push_back(book);
		}
	}
	return output;
}

void Store::showResultsOfFilter(vector<Book> output)
{
	for (Book book : output)
	{
		cout << book.getAuthor() << " " << book.getName() <<
			" " << book.getPublisher() << " " << book.getYear() <<
			" " << book.getPages() << endl;
 	}
}

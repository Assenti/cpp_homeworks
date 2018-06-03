#include "Document.h"

Document::Document()
{
	data.reserve(100);
}

void Document::insert(int line, const std::string & str)
{
	if (line <= data.size())
		data.insert(data.begin() + line, str);
	else
		std::cout << "Out of range\n";
}

void Document::remove(int line)
{
	if (!(line > data.size()))
		data.erase(data.begin() + line);
	else
		std::cout << "Out of range\n";
}

void Document::show()
{
	for (auto d : data)
		std::cout << d << std::endl;
}


Document::~Document()
{
}

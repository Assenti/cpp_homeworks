#pragma once
#include <string>
#include "Document.h"
class Command
{
protected:
	Document * doc;
public:
	virtual void execute() = 0;
	virtual void unExecute() = 0;
	void setDocument(Document *);
	virtual ~Command();
};


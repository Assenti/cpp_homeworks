#pragma once
#include "Command.h"
#include "Document.h"
class InsertCommand :
	public Command
{
private:
	int line;
	std::string str;
public:
	InsertCommand(int, const std::string &);
	void execute() override final;
	void unExecute() override final;
	~InsertCommand();
};


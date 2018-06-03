#pragma once
#include <vector>
#include "Command.h"
#include "InsertCommand.h"
class MyReceiver
{
private:
	std::vector<Command *> doneCommands;
	Document doc;
	Command * command;
public:
	std::vector<Command *> getDoneCommands();
	void insert(int, std::string);
	void undo();
	void show();
	MyReceiver();
	~MyReceiver();
};


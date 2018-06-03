#include "MyReceiver.h"

std::vector<Command*> MyReceiver::getDoneCommands()
{
	return doneCommands;
}

void MyReceiver::insert(int line, std::string str)
{
	command = new InsertCommand(line, str);
	command->setDocument(&doc);
	command->execute();
	doneCommands.push_back(command);
}

void MyReceiver::undo()
{
	if (doneCommands.size() == 0)
		std::cout << "There is nothing to undo\n";
	else
	{
		command = doneCommands.back();
		doneCommands.pop_back();
		command->unExecute();
		delete command;
	}
}

void MyReceiver::show()
{
	doc.show();
}

MyReceiver::MyReceiver()
{
}


MyReceiver::~MyReceiver()
{
}

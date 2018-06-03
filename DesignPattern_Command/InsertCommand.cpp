#include "InsertCommand.h"

InsertCommand::InsertCommand(int _line, const std::string & _str) : line(_line), str(_str)
{
}

void InsertCommand::execute()
{
	doc->insert(line, str);
}

void InsertCommand::unExecute()
{
	doc->remove(line);
}

InsertCommand::~InsertCommand()
{
}

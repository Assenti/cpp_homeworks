#include "Group.h"
#include "Student.h"
Group::Group()
{
}
Group::~Group()
{
}
int Group::counter = 0;
void Group::setGroupId(std::string _group_id)
{
	group_id = _group_id;
}
std::string Group::getGroupId()
{
	return group_id;
}
void Group::setGroupSubject(std::string _group_subject)
{
	group_subject = _group_subject;
}
std::string Group::getGroupSubject()
{
	return group_subject;
}
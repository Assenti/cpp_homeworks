#include "PupilsGroup.h"

void PupilsGroup::show()
{
	for (auto pupil : pupils)
	{
		std::cout << pupil.getName() << "(n) " << pupil.getAge() <<
					"(a) " << pupil.getHeight() << "(h) " <<
					pupil.getWeight() << "(w)" << std::endl;
	}
}

PupilsGroup::PupilsGroup()
{
}


PupilsGroup::~PupilsGroup()
{
}

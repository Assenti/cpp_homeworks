#pragma once
#include <vector>
#include <iostream>
#include "Pupil.h"

class PupilsGroup
{
public:
	std::vector<Pupil> pupils;
	void show();
	PupilsGroup();
	~PupilsGroup();
};


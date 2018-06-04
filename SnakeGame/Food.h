#pragma once
#include "IDrawable.h"
class Food: public IDrawable
{
public:
	Food();
	void regenerate();
	~Food();
};
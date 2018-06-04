#pragma once
#include "Pixel.h"
#include <vector>
class IDrawable
{
public:	
	std::vector<Pixel> body;
	char sign;
	void draw() const;
	IDrawable();
	~IDrawable();
};

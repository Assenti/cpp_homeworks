#pragma once
#include<vector>
#include "MyPixel.h"
class IDraw
{
public:
	std::vector<MyPixel> body;
	char sign;
	void draw();
	IDraw();
	~IDraw();
};


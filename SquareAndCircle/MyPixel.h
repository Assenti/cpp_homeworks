#pragma once
#include<iostream>
class MyPixel
{
protected:
	short x, y;
	char sign;
public:
	MyPixel(short, short);
	void draw(const char);
	~MyPixel();
};


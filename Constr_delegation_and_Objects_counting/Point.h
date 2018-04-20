#pragma once
#include <iostream>

class Point
{
private:
	int x, y, z;
	static int counter;
public:
	Point(int);
	Point(int, int);
	Point(int, int, int);
	~Point();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void setZ(int z);
	int getZ();
	static int getCounter();
};


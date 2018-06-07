#pragma once
class Character
{
protected:
	char mSymbol;
	int  mWidth;
	int  mHeight;
	int  mAscent;
	int  mDescent;
	int  mPointSize;
public:
	Character();
	virtual void display() const = 0;
	virtual ~Character();
};


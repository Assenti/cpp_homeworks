#include "ConcreteCharacter.h"


ConcreteCharacter::ConcreteCharacter(char aSymbol, int aPointSize)
{
	mSymbol = aSymbol;
	mWidth = 120;
	mHeight = 100;
	mAscent = 70;
	mDescent = 0;
	mPointSize = aPointSize;
}

void ConcreteCharacter::display() const
{
	std::cout << mSymbol << " ( PointSize " << mPointSize << " )\n";
}


ConcreteCharacter::~ConcreteCharacter()
{
}

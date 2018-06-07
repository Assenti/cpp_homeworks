#pragma once
#include <map>
#include "ConcreteCharacter.h"

class FlyweightFactory
{
private:
	typedef std::map <char,const Character*> Characters;
	Characters mCharacters;
	size_t pointSize;
public:
	const Character & getCharacter(char aKey);
	FlyweightFactory(size_t);
	virtual ~FlyweightFactory();
	
};


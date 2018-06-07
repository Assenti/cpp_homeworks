#include "FlyweightFactory.h"

const Character & FlyweightFactory::getCharacter(char aKey)
{
	Characters::const_iterator it = mCharacters.find(aKey);
	if (mCharacters.end() == it)
	{
		const Character * character = new ConcreteCharacter(aKey, pointSize);
		mCharacters[aKey] = character;
		return *character;
	}
	else
	{
		return *it->second;
	}
}

FlyweightFactory::FlyweightFactory(size_t _pointSize)
{
	pointSize = _pointSize;
}

FlyweightFactory::~FlyweightFactory()
{
	for (Characters::const_iterator it = mCharacters.begin(); it != mCharacters.end(); ++it)
		delete it->second;
}

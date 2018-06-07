#include "SameLettersInString.h"

SameLettersInString::SameLettersInString(string word)
{
	this->word = word;
}

SameLettersInString::SameLettersInString()
{
}

SameLettersInString::~SameLettersInString()
{
}

string SameLettersInString::operator*(SameLettersInString other)
{
	string output;
	for (int i = 0; i < this->word.size(); i++)
	{
		if (this->word[i] == other.word[i])
		{
			output += word[i];
		}
	}
	return output;
}
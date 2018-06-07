#pragma once
#include <string>
using namespace std;

class SameLettersInString
{
public:
	string word;
	SameLettersInString(string);
	SameLettersInString();
	~SameLettersInString();
	string operator*(SameLettersInString);
};


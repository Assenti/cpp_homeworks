#include "MyAlgorithm.h"

MyAlgorithm::MyAlgorithm()
{
}

bool MyAlgorithm::isLettersUnique(std::string word)
{
	std::string data = "";
	for (int i = 0; i < word.length()-1; i++)
	{
		for (int j = i+1; j < word.length(); j++)
		{
			if (word[i] == word[j])
				data += word[i];
		}
	}
	if (data.length() >= 1) return false;
	else return true;
}

void MyAlgorithm::replaceSpaces(std::string & line, char replace, std::string insert)
{
	std::string result;
	for (auto i : line)
	{
		if (i == replace)
		{
			result += insert;
			continue;
		}
		result += i;
	}
	line = result;
}

void MyAlgorithm::minHeightTree(std::vector<int>& sortedArr)
{
	
	size_t middle = 0;
	if (sortedArr.size() == 1)
		middle = 0;
	else
		middle = round(sortedArr.size() / 2);
}


MyAlgorithm::~MyAlgorithm()
{
}

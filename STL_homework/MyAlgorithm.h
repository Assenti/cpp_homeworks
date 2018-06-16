#pragma once
#include <string>
#include <vector>
#include <cmath>
class MyAlgorithm
{
public:
	MyAlgorithm();
	//return true if unique
	static bool isLettersUnique(std::string);
	static void replaceSpaces(std::string &, char, std::string);
	static void minHeightTree(std::vector<int> &);
	~MyAlgorithm();
};


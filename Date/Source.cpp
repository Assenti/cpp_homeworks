#include <iostream>
#include "OperatorsOverloads.h"
#include "String.h"
#include "Date.h"
#include "SameLettersInString.h"
using namespace std;

int main()
{
	OperatorsOverloads w1, w2, w3;
	w1.setSalary(500);
	w1.setExperience(5);
	w2.setSalary(500);
	w2.setExperience(5);

	bool result = w1 == w2;
	cout << result << endl;

	w3 = 600;
	w3 += 200;
	w3++;
	cout << w3.getSalary() << endl;
	w3.x = 100;
	cout << w3++.x << endl;
	cout << ++w3.x << endl;

	Date one(25, 6, 2017);
	Date two(12, 8, 2012);
	Date three = one - two;
	cout << three.day << " " << three.month << " " << three.year << endl;

	SameLettersInString word1("abcdefg");
	SameLettersInString word2("abcjlkm");
	SameLettersInString word3 = word1 * word2;
	cout << word3.word << endl;

	system("pause");
	return 0;
}
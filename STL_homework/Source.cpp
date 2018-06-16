#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include "MyAlgorithm.h"
using namespace std;

int main()
{
	// 1) "abcde" -> unique or not -> naive -> algorithm 
	//naive - notice: finds EVERY and ALL same elements
	string word = "abcde";
	cout << MyAlgorithm::isLettersUnique(word) << endl;
	
	//using std::algorithm adjacent_find() - notice: finds ONLY consecutive same elements
	auto result = adjacent_find(word.begin(), word.end());
	if (result == word.end()) cout << "unique\n";
	else cout << "not unique\n";
	

	// 2) x="abc" y="abcde" -> x is substring y -> includes -> string::library
	// using std::string find()
	string x = "abc", y = "abcde";
	cout << y.find(x) << endl; // return index of first in of substr OR some set of digits

	// 3) Write a method to replace all spaces in a string with ‘%20’
	string line = "Lorem Ipsum is simply dummy text";
	char space = ' ';
	string insert = "%20";
	MyAlgorithm::replaceSpaces(line, space, insert);
	cout << line << endl;

	// 4) Given a sorted (increasing order) array, write an algorithm to create a binary tree with minimal height
	vector<int> sortedArr = { 1,2,3,4,5,6,7 };
	map<string, int> rb_tree;
	for (auto i : sortedArr)
	{
		rb_tree.insert(pair<string, int>(to_string(i)+'z', i));
	}
	map<string, int>::iterator it;
	for (it = rb_tree.begin(); it != rb_tree.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';


	system("pause");
	return 0;
}
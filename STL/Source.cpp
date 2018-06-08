#define _CRT_SECURE_NO_WARNINGS
#include <set>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include "Bus.h"
using namespace std;
void update(int &i)
{
	i += 2;
}

//bool compare(Bus & bus1, Bus & bus2)
//{
//	return bus1.getX() > bus2.getX() && bus2.getY() > bus2.getY();
//}


int calculate(const int & a, const int & b, int(*operation)(const int&, const int&))
{ 
	return operation(a, b); 
}

int main()
{
	std::map<std::string, int> data{
		{"Bob", 30},
		{"Jim", 25},
		{"Ken", 27},
		{"Ben", 20},
		{"Kelly", 21}
	};
	/*for (auto i : data)
		if (i.second > 25)
			std::cout << i.first << std::endl;

	vector<int> numbers = { 1,5,3,4,77,6,7,8,9,99 };
	sort(numbers.begin(), numbers.end());
	for (auto i : numbers)
		cout << i << ' ';
	cout << endl;
	for_each(numbers.begin(), numbers.end(), update);
	for (auto i : numbers)
		cout << i << ' ';
	cout << endl;*/
	
	/*vector<Bus> buses;
	buses.push_back(Bus(5, 5));
	buses.push_back(Bus(7, 4));
	buses.push_back(Bus(10, 8));
	buses.push_back(Bus(3, 4));
	buses.push_back(Bus(7, 12));

	sort(buses.begin(), buses.end(), compare);
	for (auto bus : buses)
		if (bus.getX() < 5 && bus.getY() < 5)
			cout << "BINGO!" << bus.getX() << " and " << bus.getY() << endl;*/

	

	int a, b;
	char o;
	std::unordered_map<char, int(*)(const int &, const int&)>operations;
	operations.insert(std::make_pair('+', [](const int& a, const int& b) { return a + b; }));
	operations.insert(std::make_pair('-', [](const int& a, const int& b) { return a - b; }));
	
	std::string s;
	std::getline(std::cin, s);
	char * symbols = new char[s.length()];
	for (int i = 0; i < s.length(); i++) symbols[i] = s[i];
	std::queue<int> operands;
	std::queue<char> operators;
	const char * c = strtok(symbols, " ");
	while (c != NULL)
	{
		if (isdigit(*c))
		{
			std::cout << "int: " << *c << std::endl;
			operands.push((int)(*c - 48));
		}
		else
		{
			std::cout << "char: " << *c << std::endl;
			operators.push(*c);
		}
		c = strtok(NULL, " ");
	}
	/*std::cin >> a >> o;
	std::cout << calculate(a, b, operations[0]) << std::endl;
	while (o != '=')
	{
		std::cin >> b;
		a = calculate(a, b, operations[o]);
		std::cin >> o;
	}
	
	std::cout << a << std::endl;*/
	
	a = operands.front();
	operands.pop();
	while (!operands.empty() && !operators.empty())
	{
		b = operands.front();
		o = operators.front();
		a = calculate(a, b, operations[o]);
		operands.pop();
		operators.pop();
	}
	std::cout << a << std::endl;
	

	delete[] symbols;
	system("pause");
	return 0;
}
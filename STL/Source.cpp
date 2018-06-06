#include <set>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Bus.h"
#include "Child.h"
using namespace std;
void update(int &i)
{
	i += 2;
}

//bool compare(Bus & bus1, Bus & bus2)
//{
//	return bus1.getX() > bus2.getX() && bus2.getY() > bus2.getY();
//}

bool compare(Child & child1, Child & child2)
{
	if (child1.age < child2.age)
		return true;
	else if (child1.age == child2.age)
		if (child1.height < child2.height)
			return true;
		else
			return false;
	else
		return false;
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

	vector<Child> children;
	children.push_back(Child("Benny", 5, 120, 40));
	children.push_back(Child("Jimmy", 5, 115, 43.5));
	children.push_back(Child("Johny", 9, 138.8, 55));
	children.push_back(Child("Katy", 3, 110.5, 35));
	children.push_back(Child("Larry", 7, 130, 50));
	
	sort(children.begin(), children.end(), compare);
	for (auto i : children)
		cout << i.name << ' ' << i.height << ' ' << i.weight << ' ' << i.age << endl;
	
	auto minny = min_element(children.begin(), children.end(), compare);
	cout << minny->name << endl;
	
	auto maxy = max_element(children.begin(), children.end(), compare);
	cout << maxy->name << endl;

	double wanted_height = 115;


	auto wanted = find_if(children.begin(), children.end(), [wanted_height](Child & c)
	{
		return c.height == wanted_height;
	});

	cout << wanted->name << endl;
	
	
	cout << count_if(children.begin(), children.end(), [wanted_height](Child c)
	{
		int cnt = 0;
		if (c.height >= wanted_height)
				cnt++;
		return cnt;
	});
	cout << endl;

	system("pause");
	return 0;
}
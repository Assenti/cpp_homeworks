#include <iostream>

#include <algorithm>
#include "PupilsGroup.h"
using namespace std;

int main()
{
	PupilsGroup p;
	p.pupils.push_back(Pupil("Benny", 5, 120, 40));
	p.pupils.push_back(Pupil("Jimmy", 5, 115, 43.5));
	p.pupils.push_back(Pupil("Johny", 9, 138.8, 55));
	p.pupils.push_back(Pupil("Katy", 3, 110.5, 35));
	p.pupils.push_back(Pupil("Larry", 7, 130, 50));
	p.pupils.push_back(Pupil("Peter", 4, 118, 53));
	
	//Sort by Height
	sort(p.pupils.begin(), p.pupils.end(), [](Pupil & p1, Pupil & p2) {
		return p1.getHeight() < p2.getHeight();
	});
	p.show();

	//Min_element by Height
	auto min = min_element(p.pupils.begin(), p.pupils.end(), [](Pupil & p1, Pupil & p2) {
		return p1.getHeight() < p2.getHeight();
	});
	cout << min->getHeight() << endl;

	//Max_element by Height
	auto max = max_element(p.pupils.begin(), p.pupils.end(), [](Pupil & p1, Pupil & p2) {
		return p1.getHeight() < p2.getHeight();
	});
	cout << max->getHeight() << endl;

	//Find_if by Height
	double wanted_height = 115;
	auto wanted = find_if(p.pupils.begin(), p.pupils.end(), [wanted_height](Pupil & p)
	{
	return p.getHeight() == wanted_height;
	});
	cout << wanted->getHeight() << endl;

	//Count_if pupil's height above than wanted_height
	cout << count_if(p.pupils.begin(), p.pupils.end(), [wanted_height](Pupil p)
	{
		int cnt = 0;
		if (p.getHeight() > wanted_height)
		cnt++;
		return cnt;
	}) << endl;

	//Reverse by Height
	reverse(p.pupils.begin(), p.pupils.end());
	p.show();
	cout << endl;

	//Random_shuffle by Height
	random_shuffle(p.pupils.begin(), p.pupils.end());
	p.show();

	//Partition by Age
	int wanted_age = 5;
	vector<Pupil>::iterator bound = partition(p.pupils.begin(), p.pupils.end(), [wanted_age](Pupil & p)
	{
		return p.getAge() < wanted_age;
	});
	for (auto it = p.pupils.begin(); it != bound; ++it)
		cout << it->getAge() << endl;

	//Is_sorted
	cout << is_sorted(p.pupils.begin(), p.pupils.end(), [](Pupil & p1, Pupil & p2) {
		return p1.getHeight() < p2.getHeight();
	}) << endl;

	sort(p.pupils.begin(), p.pupils.end(), [](Pupil & p1, Pupil & p2) {
		return p1.getHeight() < p2.getHeight();
	});

	cout << is_sorted(p.pupils.begin(), p.pupils.end(), [](Pupil & p1, Pupil & p2) {
		return p1.getHeight() < p2.getHeight();
	}) << endl;

	system("pause");
	return 0;
}
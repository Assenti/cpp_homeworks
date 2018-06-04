#include <set>
#include <map>
#include <iostream>
#include <string>

int main()
{
	std::map<std::string, int> data{
		{"Bob", 30},
		{"Jim", 25},
		{"Ken", 27},
		{"Ben", 20},
		{"Kelly", 21}
	};

	for (auto i : data)
	{
		if (i.second > 25)
		{
			std::cout << i.first << std::endl;
		}
	}


	system("pause");
	return 0;
}
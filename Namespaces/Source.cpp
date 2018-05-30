#include <iostream>

namespace my
{
	using std::cout;
	using std::endl;

	int pow(int x, int y)
	{
		int res = 1;
		for (int i = 0; i < y; i++)
		{
			res *= x;
		}
		return res;
	}
}


using std::cout;
using std::endl;

int main()
{
	cout << my::pow(5, 3) << endl;



	system("pause");
	return 0;
}
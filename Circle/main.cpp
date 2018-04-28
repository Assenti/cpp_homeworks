#include "Circle.h"

using namespace std;

int main()
{
	Circle one, two;
	cin >> one >> two;
	cout << "First object: " << one << endl;
	cout << "Second object: " << two << endl;
	bool result1 = one > two;
	bool result2 = one < two;
	bool result3 = one == two;
	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;


	system("pause");
	return 0;
}
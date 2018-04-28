#include "Airplane.h"

using namespace std;

int main()
{
	Airplane one(240, "Boeing");
	Airplane two(300, "Boeing");
	Airplane three;
	cin >> three;

	cout << "First obj: " << one << endl;
	cout << "Second obj: " << two << endl;
	cout << "Third obj: " << three << endl;
	
	bool type_result = one == two;
	bool capacity_result = three == two;

	cout << type_result << endl;
	cout << capacity_result << endl;

	

	system("pause");
	return 0;
}
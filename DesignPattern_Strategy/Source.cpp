#include "Test.h"
#include "TypeTestString.h"
#include "TypeTestInt.h"

int main()
{
	Test testing;
	testing.tests.push_back(new TypeTestInt());
	testing.tests.push_back(new TypeTestString());
	testing.init_testing();


	system("pause");
	return 0;
}
#include <vector>
#include <cassert>
#include "Receiver.h"
#include "Test.h"
#include "TypeTestString.h"
#include "TypeTestInt.h"
#include "TypeTestOther.h"
#include "MyException.h"

int main()
{
	Test testing;
	testing.tests.push_back(new TypeTestInt());
	testing.tests.push_back(new TypeTestString());
	testing.tests.push_back(new TypeTestOther());
	testing.init_testing();

		

	system("pause");
	return 0;
}
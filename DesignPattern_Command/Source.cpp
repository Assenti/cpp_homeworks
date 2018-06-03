#include "InsertTestCase.h"
#include "UndoTestCase.h"
#include "c:\Users\Sultanov\source\repos\cpp_homeworks2\DesignPattern_Strategy\Test.h"

int main()
{	
	Test testing;
	testing.tests.push_back(new InsertTestCase());
	testing.tests.push_back(new UndoTestCase());
	testing.init_testing();

		
	system("pause");
	return 0;
}
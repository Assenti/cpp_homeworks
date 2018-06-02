#include "Test.h"

void Test::init_testing()
{
	for (auto currrent : tests)
	{
		currrent->setUp();
		currrent->test();
		currrent->clean();
	}
}

Test::Test()
{
}

Test::~Test()
{
}

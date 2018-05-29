#include "FunctionalTest.h"



void FunctionalTest::global_testing()
{
	for (auto currrent_test : testCases) {
		currrent_test->setUp();
		currrent_test->test();
		currrent_test->clean();
	}
}

FunctionalTest::FunctionalTest()
{
}


FunctionalTest::~FunctionalTest()
{
}

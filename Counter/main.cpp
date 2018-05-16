#include "Counter.h"

int main()
{
	Counter one;
	one.initializeCounter();
	one.counterOneStep();
	one.displayCurrentCounter();


	system("pause");
	return 0;
}
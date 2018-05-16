#include <iostream>
#include <string>
#include "Queue.h"

int main()
{
	Queue<std::string> one;
	one.enQueue("Ben"); //1st in queue
	one.enQueue("John"); //2nd in queue
	//one += "Lizzy"; //3rd in queue
	std::cout << one.getSize() << std::endl;

	for (int i = 0; i < one.getTail(); i++)
		std::cout << one[i] << std::endl;

	//std::cout << one.addToHead("Mathew") << std::endl;
	//std::cout << one.deQueue() << std::endl;
	


	system("pause");
	return 0;
}


#include <iostream>
#include <string>
#include "Queue.h"

int main()
{
	Queue<std::string> one;
	//1st in queue
	std::cout << one.enQueue("Ben") << std::endl;
	//one += "John"; //2nd in queue
	//one += "Lizzy"; //3rd in queue

	//for (int i = 0; i < one.getTail(); i++)
	//{
	//	std::cout << one[i] << std::endl;
	//}

	//std::cout << one.addToHead("Mathew") << std::endl;
	//std::cout << one.deQueue() << std::endl;
	


	system("pause");
	return 0;
}


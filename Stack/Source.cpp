#include <iostream>
#include "Stack.h"


int main()
{
	char sample[3];
	sample[0] = 's';
	sample[1] = 'a';
	sample[2] = 'a';
	sample[3] = 'b';
	std::cout << sample[3] << std::endl;
	
	Stack<char, 10> first;
	first.push('F');
	first += 'i';
	first += 'r';
	first.pop();
	std::cout << first.peek() << std::endl;
	std::cout << first.count() << std::endl;
	first.clear();
	std::cout << first.isEmpty() << std::endl;
	first.push('1');
	first.push('2');
	first.push('3');
	first.push('4');
	first.push('5');
	first.push('6');
	first.push('7');
	first.push('8');
	first.push('9');
	first.push('0');
	std::cout << first.peek() << std::endl;
	std::cout << first.count() << std::endl;
	std::cout << first.isFull() << std::endl;
	first += 'Y';
	first += 'Z';
	std::cout << first.peek() << std::endl;

	system("pause");
	return 0;
}
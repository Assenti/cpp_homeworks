#include <iostream>
#include "Stack.h"
#include "StackDynamic.h"
#include <stack>

int main()
{

#pragma region Stack fixed size examples
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
#pragma endregion

#pragma region Stack dynamic examples
	StackDynamic<char> str;
	str.push('A');
	str.push('b');
	str.push('c');
	str.push('d');
	str.push('e');
	str.push('f');
	std::cout << str.peek() << std::endl;
	std::cout << str.pop() << std::endl;
	std::cout << str.getSize() << " | " << str.getTop() << std::endl;
	str.clear();
	std::cout << str.isEmpty() << std::endl;
	str.push('A');
	std::cout << str.peek() << std::endl;


#pragma endregion


	system("pause");
	return 0;
}
#include "Counter.h"

Counter::Counter()
{
}
Counter::~Counter()
{
}
void Counter::setStart(double _start)
{
	start = _start;
}
double Counter::getStart()
{
	return start;
}
void Counter::setEnd(double _end)
{
	end = _end;
}
double Counter::getEnd()
{
	return end;
}
void Counter::setStep(double _step)
{
	step = _step;
}
double Counter::getStep()
{
	return step;
}
void Counter::setCounter(double _counter)
{
	counter = _counter;
}
double Counter::getCounter()
{
	return counter;
}

void Counter::initializeCounter()
{
	std::cout << "Input the start value: ";
	std::cin >> start;
	std::cout << "Input the end value: ";
	std::cin >> end;
	std::cout << "Input the step size: ";
	std::cin >> step;
}
void Counter::counterOneStep()
{
	counter = start;
	counter += step;
	if (counter == end)
	{
		counter = 0;
	}
	start = counter;
}
void Counter::displayCurrentCounter()
{
	std::cout << getCounter() << std::endl;
}
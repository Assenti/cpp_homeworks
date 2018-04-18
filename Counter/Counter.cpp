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
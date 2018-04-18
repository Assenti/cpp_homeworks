#pragma once
#include <iostream>
#include <string>
class Counter
{
private:
	double start, end, step, counter;
public:
	Counter();
	~Counter();
	//Getters&Setters
	void setStart(double _start)
	{
		start = _start;
	}
	double getStart()
	{
		return start;
	}
	void setEnd(double _end)
	{
		end = _end;
	}
	double getEnd()
	{
		return end;
	}
	void setStep(double _step)
	{
		step = _step;
	}
	double getStep()
	{
		return step;
	}
	void setCounter(double _counter)
	{
		counter = _counter;
	}
	double getCounter()
	{
		return counter;
	}
	//Set initialize values: start, end, step
};


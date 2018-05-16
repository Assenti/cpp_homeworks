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
	void setStart(double _start);
	double getStart();
	void setEnd(double _end);
	double getEnd();
	void setStep(double _step);
	double getStep();
	void setCounter(double _counter);
	double getCounter();

	//Set initialize values: start, end, step
	void initializeCounter();
	//Makes one step in counter
	void counterOneStep();
	//Display the current value of counter
	void displayCurrentCounter();
};


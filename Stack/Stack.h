#pragma once

//LIFO
//Fixed size
template<class T, size_t size>
class Stack
{
private:
	T data[size];
	size_t iterator;
public:
	Stack()
	{
		iterator = 0;
	}

	void push(const T & elem)
	{
		if(iterator<size)
		{
			data[iterator++] = elem;
		}
	}

	T pop()
	{
		return data[--iterator];
	}

	T peek()
	{
		return data[iterator-1];
	}

	size_t count()
	{
		return iterator;
	}

	bool isEmpty()
	{
		if (data[0] == ' ')
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if(size == iterator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void clear()
	{
		for (int i = 0; i < size; i++)
			data[i] = ' ';
		iterator = 0;
	}

	void operator += (const T & elem)
	{
		push(elem);
	}

	void operator -- (int)
	{
		pop();
	}

	~Stack()
	{
	}

};


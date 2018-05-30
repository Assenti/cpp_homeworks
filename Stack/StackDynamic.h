#pragma once
namespace mystacks
{
//LIFO
//Float size
template<class T>
class StackDynamic
{
private:
	T * data;
	size_t size, top;
public:
	StackDynamic()
	{
		size = 1, top = 0;
		data = new T[size];
	}

	size_t getSize()
	{
		return size;
	}

	size_t getTop()
	{
		return top;
	}

	void push(const T & elem)
	{
		if (top + 1 >= size)
		{
			size *= 2;
			data = (T*)realloc(data, size * sizeof(T));
		}
		data[top++] = elem;
	}

	T pop()
	{
		return data[--top];
	}

	T peek()
	{
		return data[top-1];
	}

	bool isEmpty()
	{
		if (top == 0)
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
		delete[] data;
		top = 0;
	}

	void operator += (const T & elem)
	{
		push(elem);
	}

	void operator -- (int)
	{
		pop();
	}

	~StackDynamic()
	{
		delete[] data;
	}

};

}
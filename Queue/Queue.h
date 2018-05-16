#pragma once

//FIFO
template<class T>
class Queue
{
private:
	T * data;
	size_t size, head, tail;
public:
	Queue()
	{
		data = nullptr;
		size = head = tail = 0;
	}

	size_t getSize()
	{
		return size;
	}

	size_t getTail()
	{
		return tail;
	}

	void enQueue(const T & elem)
	{
		if (data == nullptr)
		{
			++size;
			data = new T[size];
		}
		else if (tail + 1 >= size)
		{
			size *= 2;
			data = (T*)realloc(data, size * sizeof(T));
			++tail;
		}
		data[tail] = elem;
	}

	T deQueue()
	{
		return data[head++];
	}

	T addToHead(const T & elem)
	{
		T * temple_data = new T[size+1];
		for (int i = 1, j = 0; i < size+1; i++)
		{
			temple_data[i] = data[j];
			j++;
		}
		size++;
		data = temple_data;
		data[head] = elem;
		return data[head];
	}

	void operator += (const T & elem)
	{
		enQueue(elem);
	}

	void operator --(int)
	{
		deQueue();
	}

	T operator [](int index) const
	{
		return data[index];
	}

	~Queue()
	{
		delete[] data;
	}
};


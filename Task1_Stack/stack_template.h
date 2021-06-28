#ifndef stack_template_h
#define stack_template_h

template <typename T> class stackOnArray
{
public:

	stackOnArray(int size = 10);
	~stackOnArray();
	bool push(T arg);
	T pop();
	int capacity();
	int size();
	void resize(int size);
	
private:
	T* _stack;
	int _top;
	int _size;

	void allocmem(int size);
};

template <typename T> stackOnArray<T>::stackOnArray(int size)
{
	allocmem(size);
	_top = -1;
}


template <typename T> stackOnArray<T>::~stackOnArray()
{
	delete _stack;
	_stack = nullptr;
}


template <typename T>
bool stackOnArray<T>::push(T arg)
{
	if (_top == _size-1) return false;
	
	_top++;
	_stack[_top] = arg;

	return true;
}

template <typename T>
T stackOnArray<T>::pop() 
{
	if (_top == -1)
	{
		return 0;
	}
	
	T temp = _stack[_top];
	_stack[_top] = 0;
	_top--;
	return temp;
}


template <typename T>
int stackOnArray<T>::capacity() 
{
	return _top + 1;
}


template <typename T>
int stackOnArray<T>::size()
{
	return _size;
}


template <typename T>
void stackOnArray<T>::resize(int size) 
{
	delete _stack;
	_stack = nullptr;
	allocmem(size);
}

template<typename T>
void stackOnArray<T>::allocmem(int size)
{
	_stack = new T[size];
	_size = size;
}



#endif

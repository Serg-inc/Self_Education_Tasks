#ifndef stack_template_h
#define stack_template_h

template <typename T> class sstack
{
public:

	sstack(int size = 10);
	~sstack();
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

template <typename T> sstack<T>::sstack(int size)
{
	allocmem(size);
	_top = -1;
}


template <typename T> sstack<T>::~sstack()
{
	delete _stack;
	_stack = nullptr;
}


template <typename T>
bool sstack<T>::push(T arg)
{
	if (_top == _size-1) return false;
	
	_top++;
	_stack[_top] = arg;

	return true;
}

template <typename T>
T sstack<T>::pop() 
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
int sstack<T>::capacity() 
{
	return _top + 1;
}


template <typename T>
int sstack<T>::size()
{
	return _size;
}


template <typename T>
void sstack<T>::resize(int size) 
{
	delete _stack;
	_stack = nullptr;
	allocmem(size);
}

template<typename T>
void sstack<T>::allocmem(int size)
{
	_stack = new T[size];
	_size = size;

}



#endif

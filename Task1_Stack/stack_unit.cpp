  #include "stack_unit.h"

 template <typename T>
 sstack<T>::sstack(int size)
 {
 	allocmem(size);
 }


template <typename T>
sstack<T>::~sstack()
{
	delete _stack;
	_stack = nullptr;
}


template<typename T>
void sstack<T>::allocmem(int size)
{
	_stack = new T[size];
	_size = size;
}

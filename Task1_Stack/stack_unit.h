// Stack realization based on pointer(array) and template

template <typename T>
class sstack
{
	 public:

 	sstack(int size = 10);
	~sstack();

 private:
 	T* _stack;
 	int _top = -1;
 	int _size;

    void allocmem(int size);

};
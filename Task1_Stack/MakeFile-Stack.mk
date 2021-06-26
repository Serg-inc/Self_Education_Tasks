all: stack

stack: stack_main.o
	g++ stack_main.o -o stack

stack_main.o: stack_main.cpp
	g++ -c stack_main.cpp

clean:
	rm -rf *.o *.exe stack
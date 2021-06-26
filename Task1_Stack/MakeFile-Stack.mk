CC = g++
CFLAGS = -Wall -g
stack : stack_main.o stack_unit.o
	$(CC) $(CFLAGS) -o stack stack_main.o stack_unit.o

stack_main.o : stack_main.cpp stack_unit.h
	$(CC) $(CFLAGS) -c stack_main.cpp	

stack_unit.o: stack_unit.cpp stack_unit.h
	$(CC) $(CFLAGS) -c stack_unit.cpp	

clean :
	rm  stack_main.o stack_unit.o stack.exe
	
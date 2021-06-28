CC=g++ 
CFLAGS= -Wall -g #Flag for implicit rules. Turn on debug info

stack: stack_main.o 
	$(CC) $(CFLAGS)  -o  stack stack_main.o 

stack_main.o: stack_main.cpp stack_template.h
	$(CC) $(CFLAGS)  -c stack_main.cpp 

clean :
	rm  stack_main.o  stack.exe

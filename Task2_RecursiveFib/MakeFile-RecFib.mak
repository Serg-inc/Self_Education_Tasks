CC=g++ 
CFLAGS= -Wall -g #Flag for implicit rules. Turn on debug info

recfib: recfib_main.o 
	$(CC) $(CFLAGS)  -o  recfib recfib_main.o 

recfib_main.o: recfib_main.cpp 
	$(CC) $(CFLAGS)  -c recfib_main.cpp 

clean :
	rm  recfib_main.o  recfib.exe

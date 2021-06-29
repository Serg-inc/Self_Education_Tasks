CC=g++ 
CFLAGS= -Wall -g #Flag for implicit rules. Turn on debug info

pthread: pthread_main.o 
	$(CC) $(CFLAGS)  -o  pthread pthread_main.o 

pthread_main.o: pthread_main.cpp 
	$(CC) $(CFLAGS)  -c pthread_main.cpp 

clean :
	rm  pthread_main.o  pthread.exe

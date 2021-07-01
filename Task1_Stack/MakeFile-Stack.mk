CC=g++ 
CFLAGS= -Wall -g #Flag for implicit rules. Turn on debug info

SOURCES=stack_main.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=stack


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS)	-o $(EXECUTABLE) $(OBJECTS)

$(OBJECTS): $(SOURCES) 
	$(CC) $(CFLAGS) -c $(SOURCES)

clean:
	rm  *.o *.exe


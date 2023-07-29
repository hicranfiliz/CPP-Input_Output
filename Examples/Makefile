CC = g++

CFLAGS = -Wall -Wextra -std=c++11

EXEC = main

SOURCES = main.cpp KeyboardReader.cpp TerminalWriter.cpp FileReader.cpp FileWriter.cpp

OBJECTS = $(SOURCES:.cpp=.o)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJECTS)

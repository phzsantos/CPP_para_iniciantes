TARGET=conversor
CC=g++
DEBUG=-g
OPT=-O2
WARN=-Wall
CCFLAGS=$(DEBUG) $(OPT) $(WARN)
LD=g++
OBJS= main.o project.o
all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS)

main.o: 25-Main.cpp
	$(CC) -c $(CCFLAGS) 25-Main.cpp -o main.o

project.o: 25.1-Project.cpp
	$(CC) -c $(CCFLAGS) 25.1-Project.cpp -o project.o

install:
	@install $(TARGET) /usr/local/bin/$(TARGET)

uninstall:
	@rm /usr/local/bin/$(TARGET)

clean:
	@rm -f *.o
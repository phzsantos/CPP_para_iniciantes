TARGET=programa
CXX=g++
LD=g++
OBJS=28-cores.cpp
programa:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS)
TARGET=ncurses
CXX=g++
LD=g++
OBJS=27-Hello-ncurses.cpp
NCURSES=-lncurses
TINFO=-ltinfo
ncurses:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(NCURSES) $(TINFO)
SRCS = $(wildcard *.cpp)
PROGS = $(patsubst %.cpp, %, $(SRCS))

all: mkdir $(PROGS) 

mkdir:
	mkdir exe

%: %.cpp
	g++ -o exe/$@ $<
SRCS = $(wildcard *.hs)
PROGS = $(patsubst %.hs, %, $(SRCS))

all: mkdir $(PROGS) clear

mkdir:
	mkdir exe

%: %.hs
	ghc -o exe/$@ $<

clear:
	rm *.o *.hi
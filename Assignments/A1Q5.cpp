# Makefile 

CPP = g++
OFLAG = -o
.SUFFIXES : .o .cpp .c
.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<
.c.o:
	$(CPP) $(CPPFLAGS) -c $<

all: A1Q3

A1Q3: A1Q3.o
	$(CPP) $(OFLAG) A1Q3 A1Q3.o

A1Q3.o: A1Q3.cpp

.PHONY : debug

debug:
	$(CPP) -g A1Q3.cpp

clean:
	rm -f A1Q3 A1Q3.o


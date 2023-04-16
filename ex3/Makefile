CC=gcc
CXX=g++
RM=rm -f
RMALL=rm -fr
CFLAGS=-g -Wall
CPPFLAGS=-g -Wall

TARGET = main
LIBFILE = lib

all: $(TARGET)

$(TARGET): $(TARGET).cpp
		$(CXX) $(CPPFLAGS) -o $(TARGET).o -c $(TARGET).cpp
		$(CXX) $(CPPFLAGS) -o $(LIBFILE).o -c $(LIBFILE).cpp
		$(CXX) $(CPPFLAGS) $(TARGET).o $(LIBFILE).o -o main

clean:
	$(RM) $(TARGET)
	$(RM) $(TARGET).o
	$(RM) $(LIBFILE).o

#distclean: clean
#	$(RMALL) $(TARGET).dSYM/

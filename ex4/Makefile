# Dynamic Linking
CC=gcc
CXX=g++
RM=rm -f
RMALL=rm -fr
CFLAGS=-g -Wall
CPPFLAGS=-g -Wall
CPPSHARED=-shared -fPIC

TARGET = main
LIBFILE = math

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	# Compile the Lib files First
	$(CXX) $(CPPFLAGS) -o $(LIBFILE).o -c $(LIBFILE).cpp
	$(CXX) $(CPPSHARED) -o lib$(LIBFILE).so $(LIBFILE).o
	# Compile the Main.cpp file
	$(CXX) -I. -L. -Wall -o $(TARGET) $(TARGET).cpp -l$(LIBFILE)
	# $(CXX) $(CPPFLAGS) $(TARGET).o $(LIBFILE).o -o main

clean:
	$(RM) $(TARGET)
	$(RM) $(LIBFILE).o
	$(RM) lib$(LIBFILE).so

#distclean: clean
#	$(RMALL) $(TARGET).dSYM/

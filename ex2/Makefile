# Dynamic Linking
CC=gcc
CXX=g++
RM=rm -f
RMALL=rm -fr
CFLAGS=-g -Wall
CPPFLAGS=-Wall -std=c++1y -c -o
CPPSHARED=-shared

TARGET=input
LIBFILE=sha1

all: $(LIBFILE)

$(LIBFILE): $(LIBFILE).cpp
		$(CXX) $(CPPFLAGS) $(LIBFILE).o $(LIBFILE).cpp
		$(CXX) $(CPPSHARED) -o lib$(LIBFILE).so $(LIBFILE).o
		$(CXX) -I. -L. -Wall -o $(TARGET) $(TARGET).cpp -l$(LIBFILE)

clean:
	$(RM) $(TARGET)
	$(RM) $(LIBFILE).o
	$(RM) lib$(LIBFILE).so

distclean: clean
	$(RMALL) $(TARGET).dSYM/

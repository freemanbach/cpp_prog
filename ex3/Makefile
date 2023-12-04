# Static Linking
CC=gcc
CXX=g++
RM=del /s /q
RMALL=rmdir /s /q
CFLAGS=-std=c17 -fPIC -g Wall -O3
CXXFLAGS=-fPIC -g -Wall -Wextra -pedantic -O3
CPPFLAGS=-std=c17 -fPIC -g -Wall -O3
LDFLAGS=-shared

TARGET = main
LIBFILE = lib

all: $(TARGET)

$(TARGET): $(TARGET).cpp
		$(CXX) $(CXXFLAGS) -o $(TARGET).o -c $(TARGET).cpp
		$(CXX) $(CXXFLAGS) -o $(LIBFILE).o -c $(LIBFILE).cpp
		$(CXX) $(CXXFLAGS) $(TARGET).o $(LIBFILE).o -o main

clean:
	$(RM) $(TARGET).exe
	$(RM) $(TARGET).o
	$(RM) $(LIBFILE).o

distclean: clean

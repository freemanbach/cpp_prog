# Simple Compile
# # this is Pretty sweet makefile for single c or cpp file
CC=gcc
CXX=g++
RM=del /s /q
RMALL=rmdir /s /q
CFLAGS=-std=c17 -fPIC -g -Wall -O3
CXXFLAGS=-g -Wall -Wextra -pedantic -O3
CPPFLAGS=-std=c17 -fPIC -g -Wall -O3
LDFLAGS=-shared

TARGET = hello

all: $(TARGET)

$(TARGET): $(TARGET).o
	        $(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).o

$(TARGET).o: $(TARGET).cpp
	        $(CXX) $(CXXFLAGS) -c $(TARGET).cpp

clean:
	$(RM) $(TARGET).exe
	$(RM) $(TARGET).o

# this will clean first then dirs next
clean_all: clean
	$(RMALL) $(TARGET).dSYM/

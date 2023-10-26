# Simple Compile
# # this is Pretty sweet makefile for single c or cpp file
CC=gcc
CXX=g++
RM=rm -f
RMALL=rm -fr
CPPOBJ=-Wall -c
CPPFLAGS=-g -Wall

TARGET = hello

all: $(TARGET)

$(TARGET): $(TARGET).cpp
		$(CXX) $(CPPOBJ) $(TARGET).cpp
		$(CXX) $(CPPFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)
	$(RM) $(TARGET).o

# this will clean first then dirs next
clean_all: clean
	$(RMALL) $(TARGET).dSYM/

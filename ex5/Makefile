# Simple Compile
# # this is Pretty sweet makefile for single c or cpp file
CC=cc
CXX=gcc
RM=rm -f
RMALL=rm -fr
CPPOBJ=-Wall -c
CPPFLAGS=-g -Wall

TARGET = test

all: $(TARGET)

$(TARGET): $(TARGET).c
		$(CXX) $(CPPOBJ) $(TARGET).c
		$(CXX) $(CPPFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
	$(RM) $(TARGET).o

# this will clean first then dirs next
clean_all: clean
	$(RMALL) $(TARGET).dSYM/

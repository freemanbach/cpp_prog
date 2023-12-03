# Simple Compile
# # this is Pretty sweet makefile for single c or cpp file
CC=gcc
CXX=g++
RM=rm -f
RMALL=rm -fr
CPPOBJ=-Wall -c
CPPFLAGS=-g -Wall

TARGET = test

all: $(TARGET)

$(TARGET): $(TARGET).c
		$(CC) $(CPPOBJ) $(TARGET).c
		$(CC) $(CPPFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
	$(RM) $(TARGET).o

# this will clean first then dirs next
clean_all: clean
	$(RMALL) $(TARGET).dSYM/

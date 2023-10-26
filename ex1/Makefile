# Simple Compile
CC=gcc
CXX=g++
RM=rm -f
RMALL=rm -fr
CFLAGS=-g -Wall
CPPFLAGS=-g -Wall

TARGET = hello

all: $(TARGET)

$(TARGET): $(TARGET).cpp
		$(CXX) $(CPPFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)

# this will clean first then dirs next
clean_all: clean
	$(RMALL) $(TARGET).dSYM/

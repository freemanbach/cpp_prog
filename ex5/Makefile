# Simple Compile
# https://opensource.com/article/20/6/linux-libraries
# this is Pretty sweet makefile for single c or cpp file
CC=gcc 
CXX=g++
RM=del /s /q
RMALL=rmdir /s /q
CFLAGS=-std=c17 -fPIC -g -Wall -O3
CXXFLAGS=-g -Wall -Werror -Wextra -pendantic -O3
CPPFLAGS=-std=c17 -g -Wall -O3
LDFLAGS=-shared
LDLIBS=

TARGET = test

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(CPPFLAGS) -o $(TARGET) $(TARGET).o

$(TARGET).o: $(TARGET).c
	$(CC) $(CPPFLAGS) -c $(TARGET).c

clean:
	$(RM) $(TARGET).exe
	$(RM) $(TARGET).o

# this will clean first then dirs next
clean_all: clean

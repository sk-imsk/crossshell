CC = gcc
CFLAGS = -Wall -Iinclude
SRC = $(wildcard src/.c=.o)
TARGET = crossshell

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) ./src/* -o $@ $^
	
clean:
	rm -rf $(TARGET)

CC = cc
CFLAGS = -Wall -g
TARGET = hello
SOURCES = hello.c

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

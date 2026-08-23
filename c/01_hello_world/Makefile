CC := cc
CFLAGS := -std=c17 -Wall -Wextra -Wpedantic
TARGET := hello_world

.PHONY: all run clean

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
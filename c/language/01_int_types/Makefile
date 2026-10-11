CC := cc
CFLAGS := -std=c23 -Wall -Wextra -Wpedantic
TARGET := int_types

.PHONY: all run clean

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
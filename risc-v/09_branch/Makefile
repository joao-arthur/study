TARGET = main
SOURCE = main.S
OBJECT = main.o

AS = riscv64-linux-gnu-as
LD = riscv64-linux-gnu-ld
GDB = riscv64-linux-gnu-gdb
QEMU = qemu-riscv64

GDB_PORT = 1234

$(TARGET): $(OBJECT)
	$(LD) $< -o $@

$(OBJECT): $(SOURCE)
	$(AS) $< -o $@

run: $(TARGET)
	$(QEMU) ./$(TARGET)

debug: $(TARGET)
	$(QEMU) -g $(GDB_PORT) ./$(TARGET) & \
	$(GDB) ./$(TARGET) \
		-ex "target remote :$(GDB_PORT)" \
		-ex "layout asm" \
		-ex "layout regs"

clean:
	rm -f $(OBJECT) $(TARGET)

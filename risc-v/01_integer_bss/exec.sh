riscv64-linux-gnu-as integer.S -o integer.o
riscv64-linux-gnu-ld integer.o -o integer
qemu-riscv64 ./integer
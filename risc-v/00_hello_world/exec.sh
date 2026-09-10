riscv64-linux-gnu-as hello_world.S -o hello_world.o
riscv64-linux-gnu-ld hello_world.o -o hello_world
qemu-riscv64 ./hello_world
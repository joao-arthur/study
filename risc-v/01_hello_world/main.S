.section .text

.global _start

_start:
    li a0, 1         # fd = STDOUT
    la a1, message   # *buf = message address
    li a2, 14        # count = 14 bytes ['H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n']
    li a7, 64        # write syscall 
    ecall            # Call the Linux trap

    li a0, 0  # Program exit status, 0 = EXIT_SUCCESS
    li a7, 93 # exit syscall 
    ecall     # Call the Linux trap

.section .rodata

message:
    .ascii "Hello, World!\n"

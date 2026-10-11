.section .text

.global _start

_start:
    li  t0, 1838
    li  t1, 2
    rem t2, t0, t1 # t2 = 1838 % 2

    la ra, after
    beq t2, zero, print_even
    j print_odd

after:
    j exit

print_even:
    li a0, 1    # STDOUT
    la a1, even # *buf
    li a2, 15   # 15 bytes
    li a7, 64   # write 
    ecall
    ret

print_odd:
    li a0, 1   # STDOUT
    la a1, odd # *buf
    li a2, 14  # 14 bytes
    li a7, 64  # write 
    ecall
    ret

exit:
    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit 
    ecall

.section .rodata

even:
    .ascii "Number is even\n"

odd:
    .ascii "Number is odd\n"

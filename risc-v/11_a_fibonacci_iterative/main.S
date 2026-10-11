.section .text
.global _start

_start:
    li a0, 10
    li t0, 1
loop:
    add t2, t0, t1
    mv t0, t1 
    mv t1, t2
    addi a0, a0, -1
    bgtz a0, loop
    mv a0, t2

exit_success:
    li a0, 0
    li a7, 93
    ecall

.section .text
.global _start

_start:
    li a0, 7
    mv t0, a0
loop:
    addi t0, t0, -1
    beqz t0, after
    mul a0, a0, t0
    j loop
after:
    li a0, 0
    li a7, 93
    ecall

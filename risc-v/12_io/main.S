.section .text
.global _start

_start:
    li a0, 0
    li a1, 32
    li a2, 3
    li a3, 34
    li a4, -1
    li a5, 0
    li a7, 222
    ecall

    mv t0, a0

    li a0, 0
    mv a1, t0
    li a2, 32
    li a7, 63
    ecall

    mv a2, a0

    li a0, 1
    mv a1, t0
    li a7, 64
    ecall

    li a0, 0
    li a7, 93
    ecall

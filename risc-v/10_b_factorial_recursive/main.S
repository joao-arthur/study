.section .text
.global _start

_start:
    li a0, 7
    jal factorial

    li a0, 0
    li a7, 93
    ecall

factorial:
    addi sp, sp, -16
    sd ra, 8(sp)
    sd a0, 0(sp)

    li t0, 1
    beq a0, t0, factorial_base

    addi a0, a0, -1
    jal factorial

    ld t1, 0(sp)
    mul a0, a0, t1
factorial_base:
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

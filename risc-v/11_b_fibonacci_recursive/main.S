.section .text
.global _start

_start:
    li a0, 10
    jal fibonacci
    j exit_success

fibonacci:
    addi sp, sp, -32
    sd ra, 24(sp)
    sd a0, 16(sp)

    li t0, 1
    ble a0, t0, fibonacci_base

    addi a0, a0, -1
    jal fibonacci
    sd a0, 8(sp)

    ld a0, 16(sp)
    addi a0, a0, -2
    jal fibonacci

    ld t0, 8(sp)
    add a0, a0, t0

    ld ra, 24(sp)
    addi sp, sp, 32
    ret

fibonacci_base:
    li a0, 1
    ld ra, 24(sp)
    addi sp, sp, 32
    ret

exit_success:
    li a0, 0
    li a7, 93
    ecall

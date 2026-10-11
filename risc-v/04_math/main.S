.section .text
.global _start

_start:
    addi t0, t0, 20  # t0 = 0 + 20 = 20
    addi t0, t0, -21 # t0 = t0 - 21 = -21

    addi t1, t1, 10  # t1 = 0 + 10 = 10
    addi t2, t2, 11  # t2 = 0 + 11 = 11
    sub  t3, t1, t2  # t3 = t1 - t2 = -1
    sub  t4, t2, t1  # t4 = t2 - t1 = 1

    li t0, 0
    li t1, 0
    li t2, 0
    li t3, 0
    li t4, 0

    addi t0, x0, 2   # t0 = 0 + 2
    addi t1, x0, 3   # t1 = 0 + 3
    addi t2, x0, 5   # t2 = 0 + 5

    # M => mul, div, rem, remu

    mul t3, t0, t1  # t3 = 2 x 3 = 6
    mul t4, t0, t2  # t4 = 2 x 5 = 10
    mul t5, t1, t2  # t5 = 3 x 5 = 15 

    div s1, t5, t1  # s1 = 15 / 3 = 5
    div s2, t5, t2  # s2 = 15 / 5 = 3
    div s3, t4, t0  # s3 = 10 / 2 = 5
    div s4, t4, t2  # s4 = 10 / 5 = 2
    div s5, t3, t0  # s5 = 6 / 2 = 3
    div s6, t3, t1  # s6 = 6 / 3 = 2

    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

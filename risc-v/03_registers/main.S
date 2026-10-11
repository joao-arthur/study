.section .text
.global _start

_start:
    li   t0, 2       # t0 = 2
    li   t1, 3       # t1 = 3
    addi t2, zero, 5 # t2 = 0 + 5
    addi t3, zero, 7 # t3 = 0 + 7

    li   t0, 0          # t0 = 0
    mv   t1, zero       # t1 = 0
    addi t2, zero, 0    # t2 = 0 + 0
    add  t3, zero, zero # t3 = 0 + 0

    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

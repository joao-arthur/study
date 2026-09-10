.section .text
.global _start

_start:
    li   t0, 42

    li   t1, 10
    rem  t2, t0, t1
    div  t0, t0, t1

    addi t2, t2, '0'
    addi t0, t0, '0'

    la   t3, buffer
    sb   t0, 0(t3)
    sb   t2, 1(t3)
    li   t4, '\n'
    sb   t4, 2(t3)

    li   a0, 1
    la   a1, buffer
    li   a2, 3
    li   a7, 64
    ecall

    li   a0, 0
    li   a7, 93
    ecall

.section .bss
buffer:
    .space 3

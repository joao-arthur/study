.section .text
.global _start

_start:
    addi sp, sp, -20
    li   t1, 6174

    li   t2, 1000
    div  t3, t1, t2
    addi t3, t3, '0'
    sb   t3, 0(sp)

    rem  t1, t1, t2
    li   t2, 100
    div  t3, t1, t2
    addi t3, t3, '0'
    sb   t3, 1(sp)

    rem  t1, t1, t2
    li   t2, 10
    div  t3, t1, t2
    addi t3, t3, '0'
    sb   t3, 2(sp)

    rem  t1, t1, t2
    addi t3, t1, '0'
    sb   t3, 3(sp)

    li   t3, '\n'
    sb   t3, 4(sp)

    li   a0, 1
    mv   a1, sp
    li   a2, 5
    li   a7, 64
    ecall

    li   a0, 0
    li   a7, 93
    ecall

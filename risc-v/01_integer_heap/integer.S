.section .text
.global _start

_start:
    li   a0, 0   # prefered address
    li   a1, 20  # size
    li   a2, 3   # PROT_READ | PROT_WRITE
    li   a3, 34  # MAP_PRIVATE | MAP_ANONYMOUS
    li   a4, -1  # no fd
    li   a5, 0   # no offset
    li   a7, 222 # mmap
    ecall

    li   t0, 6174

    li   t1, 1000
    div  t2, t0, t1
    addi t2, t2, '0'
    sb   t2, 0(a0)

    rem  t0, t0, t1
    li   t1, 100
    div  t2, t0, t1
    addi t2, t2, '0'
    sb   t2, 1(a0)

    rem  t0, t0, t1
    li   t1, 10
    div  t2, t0, t1
    addi t2, t2, '0'
    sb   t2, 2(a0)

    rem  t0, t0, t1
    addi t2, t0, '0'
    sb   t2, 3(a0)

    li   t2, '\n'
    sb   t2, 4(a0)

    mv   t4, a0

    li   a0, 1
    mv   a1, t4
    li   a2, 5
    li   a7, 64
    ecall

    li   a0, 0
    li   a7, 93
    ecall

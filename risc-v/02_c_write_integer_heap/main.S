.section .text

.global _start

_start:
    li   a0, 0       # *addr = 0 = no prefered address
    li   a1, 5       # length
    li   a2, 3       # prot = PROT_READ 0x01 | PROT_WRITE 0x02 = 0x03
    li   a3, 34      # MAP_PRIVATE 0x02 | MAP_ANONYMOUS 0x20 = 0x22
    li   a4, -1      # fd = -1 = no file descriptor
    li   a5, 0       # offset = 0 = no offset
    li   a7, 222     # mmap
    ecall            # the returned address is in a0

    li   t0, 6174    # The number we want to print

    li   t1, 1000    # t1 = 1000
    div  t2, t0, t1  # t2 = 6174 / 1000 = 6
    addi t2, t2, '0' # t2 = 6 + 48 (ASCII 0) = 54 (ASCII '6')
    sb   t2, 0(a0)   # a0[0] = 54 (ASCII '6')

    rem  t0, t0, t1  # t0 = 6174 % 1000 = 174
    li   t1, 100     # t1 = 100
    div  t2, t0, t1  # t2 = 174 / 100 = 1
    addi t2, t2, '0' # t2 = 1 + 48 (ASCII 0) = 49 (ASCII '1')
    sb   t2, 1(a0)   # a0[1] = 49 (ASCII '1')

    rem  t0, t0, t1  # t0 = 174 % 100 = 74
    li   t1, 10      # t1 = 10
    div  t2, t0, t1  # t2 = 74 / 10 = 7
    addi t2, t2, '0' # t2 = 7 + 48 (ASCII 0) = 55 (ASCII '7')
    sb   t2, 2(a0)   # t[2] = 55 (ASCII '7')

    rem  t0, t0, t1  # t0 = 74 % 10 = 4
    addi t2, t0, '0' # t2 = 4 + 48 (ASCII 0) = 52 (ASCII '4')
    sb   t2, 3(a0)   # a0[3] = 52 (ASCII '4')

    li   t2, '\n'    # t2 = 10 (ASCII '\n')
    sb   t2, 4(a0)   # a0[4] = 10 (ASCII '\n')

    mv   t4, a0      # t4 = a0

    li a0, 1  # STDOUT
    mv a1, t4 # *buf
    li a2, 5  # count
    li a7, 64 # write
    ecall

    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

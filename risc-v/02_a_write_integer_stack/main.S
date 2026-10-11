.section .text

.global _start

_start:
    addi sp, sp, -5  # Where we will store ['6', '1', '7', '4', '\n']
    li   t1, 6174    # The number we want to print

    li   t2, 1000    # t2 = 1000
    div  t3, t1, t2  # t3 = 6174 / 1000 = 6
    addi t3, t3, '0' # t3 + 6 + 48 (ASCII 0) = 54 (ASCII '6')
    sb   t3, 0(sp)   # sp[0] = 54 (ASCII '6')

    rem  t1, t1, t2  # t1 = 6174 % 1000 = 174
    li   t2, 100     # t2 = 100
    div  t3, t1, t2  # t3 = 174 / 100 = 1
    addi t3, t3, '0' # t3 = 1 + 48 (ASCII 0) = 49 (ASCII '1')
    sb   t3, 1(sp)   # sp[1] = 49 (ASCII '1')

    rem  t1, t1, t2  # t1 = 174 % 100 = 74
    li   t2, 10      # t2 = 10
    div  t3, t1, t2  # t3 = 74 / 10 = 7
    addi t3, t3, '0' # t3 = 7 + 48 (ASCII 0) = 55 (ASCII '7')
    sb   t3, 2(sp)   # sp[2] = 55 (ASCII '7')

    rem  t1, t1, t2  # t1 = 74 % 10 = 4
    addi t3, t1, '0' # t3 = 4 + 48 (ASCII 0) = 52 (ASCII '4')
    sb   t3, 3(sp)   # sp[3] = 52 (ASCII '4')

    li   t3, '\n'    # t3 = 10 (ASCII '\n')
    sb   t3, 4(sp)   # sp[4] = 10 (ASCII '\n')

    li a0, 1  # STDOUT
    mv a1, sp # *buf
    li a2, 5  # count
    li a7, 64 # write
    ecall

    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

.section .text
.global _start

_start:
    li t0, 1
    li t1, 2

    bgt t0, t1, print_gt
    j after_gt

print_gt:
    la a0, gt_message
    jal print

after_gt:
    bge t0, t1, print_ge
    j after_ge

print_ge:
    la a0, ge_message
    jal print

after_ge:
    blt t0, t1, print_lt
    j after_lt

print_lt:
    la a0, lt_message
    jal print

after_lt:
    ble t0, t1, print_le
    j after_le

print_le:
    la a0, le_message
    jal print

after_le:
    beq t0, t1, print_eq
    j after_eq

print_eq:
    la a0, eq_message
    jal print

after_eq:
    bne t0, t1, print_ne
    j after_ne

print_ne:
    la a0, ne_message
    jal print

after_ne:
    j exit_success

print:
    mv a1, a0
    li a0, 1  # stdout
    li a2, 3  # count
    li a7, 64 # write
    ecall
    ret

exit_success:
    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

.section .rodata

ge_message:
    .ascii ">=\n"

le_message:
    .ascii "<=\n"

gt_message:
    .ascii "> \n"

lt_message:
    .ascii "< \n"

eq_message:
    .ascii "==\n"

ne_message:
    .ascii "!=\n"

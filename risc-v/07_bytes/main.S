.section .text
.global _start

_start:
    addi sp, sp, -32

    li t0, 0xF0
    li t1, 0xFF00
    li t2, 0xFFFF0000
    li t3, 0xFFFFFFFF00000000

    li t4, 0b11111111
    li t5, 0b11110000

    sd t3, 0(sp)  # stored as: 00 00 00 00 FF FF FF FF
    sw t2, 8(sp)  # stored as: 00 00 FF FF
    sh t1, 12(sp) # stored as: 00 FF
    sb t0, 14(sp) # stored as: F0

    lbu s2, 0(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 1(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 2(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 3(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 4(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 5(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 6(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 7(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 8(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 9(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 10(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 11(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 12(sp)
    bne s2, zero, exit_failure # 0x00
    lbu s2, 13(sp)
    bne s2, t4,   exit_failure # 0xFF
    lbu s2, 14(sp)
    bne s2, t5,   exit_failure # 0xF0

    ld  t3, 0(sp)  # loaded as: 00 00 00 00 FF FF FF FF
    lwu t2, 8(sp)  # loaded as: 00 00 FF FF
    lhu t1, 12(sp) # loaded as: 00 FF
    lbu t0, 14(sp) # loaded as: F0

    li s3, 0xFFFFFFFF00000000
    bne t3, s3, exit_failure
    li s3, 0xFFFF0000
    bne t2, s3, exit_failure
    li s3, 0xFF00
    bne t1, s3, exit_failure
    li s3, 0xF0
    bne t0, s3, exit_failure

    j exit_success

free_memory:
    addi sp, sp, 32
    ret

exit_failure:
    jal ra, free_memory
    li a0, 1  # EXIT_exit_FAILURE
    li a7, 93 # exit
    ecall

exit_success:
    jal ra, free_memory
    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

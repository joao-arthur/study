.section .text
.global _start

_start:
    j main_fn

main_fn:
    jal ra, fn_a
    j exit_success

fn_a:
    li s2, 1
    addi sp, sp, -16 # Alignment restriction. We actually use just 8
    sd ra, 8(sp)
    jal ra, fn_b
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

fn_b:
    li s3, 2
    addi sp, sp, -16 # Alignment restriction. We actually use just 8
    sd ra, 8(sp)
    jal ra, fn_c
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

fn_c:
    li s4, 4
    addi sp, sp, -16 # Alignment restriction. We actually use just 8
    sd ra, 8(sp)
    jal ra, fn_d
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

fn_d:
    li s5, 8
    addi sp, sp, -16 # Alignment restriction. We actually use just 8
    sd ra, 8(sp)
    jal ra, fn_e
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

fn_e:
    li s6, 16
    addi sp, sp, -16 # Alignment restriction. We actually use just 8
    sd ra, 8(sp)
    jal ra, fn_f
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

fn_f:
    li s7, 32
    addi sp, sp, -16 # Alignment restriction. We actually use just 8
    sd ra, 8(sp)
    jal ra, fn_g
    ld ra, 8(sp)
    addi sp, sp, 16
    ret

fn_g:
    li s8, 64
    ret

exit_success:
    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

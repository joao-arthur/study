.section .text

.global _start

_start:
    li a0, 0         # Program exit status, 0 = EXIT_SUCCESS
    li a7, 93        # Linux RISC-V exit syscall
    ecall            # Call the Linux trap

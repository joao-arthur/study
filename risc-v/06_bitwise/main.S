.section .text
.global _start

_start:
    li t0, 1 # 0b001
    li t1, 2 # 0b010
    li t2, 3 # 0b011
    li t3, 4 # 0b100
    li t4, 5 # 0b101
    li t5, 6 # 0b110
    li t6, 7 # 0b111

    and s1, t4, t5 # 0b101 & 0b110 = 0b100
    or  s2, t3, t2 # 0b100 | 0b011 = 0b111
    xor s3, t2, t5 # 0b011 ^ 0b110 = 0b101
    not s4, t5     # ~ 0b000...110 = 0b111...001

    li s5, 3       # 0b000011 3
    li s6, -9827   # 0b111...1101100110011101
    li s7, -9827   # 0b111...1101100110011101

    slli s5, s5, 1 # 0b000110 6
    slli s5, s5, 1 # 0b001100 12
    slli s5, s5, 1 # 0b011000 24
    slli s5, s5, 1 # 0b110000 48

    # Logical shift = unsigned

    srli s6, s6, 1 # 0b0111...110110011001110
    srli s6, s6, 1 # 0b00111...11011001100111
    srli s6, s6, 1 # 0b000111...1101100110011
    srli s6, s6, 1 # 0b0000111...110110011001

    # Arithmetical shift = signed

    srai s7, s7, 1 # 0b1111...110110011001110
    srai s7, s7, 1 # 0b11111...11011001100111
    srai s7, s7, 1 # 0b111111...1101100110011
    srai s7, s7, 1 # 0b1111111...110110011001

    li a0, 0  # EXIT_SUCCESS
    li a7, 93 # exit
    ecall

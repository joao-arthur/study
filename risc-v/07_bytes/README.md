# 07 - Bytes, Half-words, words

RISC-V is a little-endian ISC. Also it provides instructions to handle:
- 8 bits (**b**ytes)
- 16 bits (**h**alf-words)
- 32 bits (**w**ords)
- 64 bits (**d**ouble-words)

Alignment and padding are not required by the ISC itself, it is rather a hardware limitation that may be present or not. Because of such, the developer must handle it explicitily.

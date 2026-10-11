# 08 - Functions

RISC-V does not have true functions. It rather has labels. To call a function is to "jump" into it. When returning from a function, the address saved in the **ra** register is used as the point of where to go. Since all we know is memory, we can save **ra** somewhere to retrieve it later, for example on the stack.
For every function we define, we can give semantics to parts of the stack. This is what allows high-level programming languages **functions**.

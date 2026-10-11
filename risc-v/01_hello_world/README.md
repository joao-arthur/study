# 01 - Hello, world

To print "Hello, World!", we need to call the Write syscall.
Also, we are storing the string on the ELF executable inside the `.rodata` section. when we access "message", we are actually accessing its virtual address inside the final executable.

section .text
global my_getpid
my_getpid:
	mov rax, 0x14; write syscall number getpid in rax
	int 0x80
	ret

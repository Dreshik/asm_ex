section .text
global my_getpid
my_getpid:
	mov rax, 0x27; write syscall number getpid in rax
	syscall
	ret

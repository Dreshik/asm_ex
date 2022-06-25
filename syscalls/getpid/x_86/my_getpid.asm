section .text
global my_getpid
my_getpid:
	mov eax, 0x14; write syscall number getpid in eax
	int 0x80
	ret

section .text
global my_mkdir
my_mkdir:
; first arg in rdi
; second arg in rsi
	mov rax, 0x53; 0x53 syscall number mkdir
	syscall
	ret

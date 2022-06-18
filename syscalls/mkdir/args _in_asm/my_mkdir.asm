section .data
dir_name: db 'dir_maked_by_my_mkdir'

section .text
global my_mkdir
my_mkdir:
	mov rdi, $dir_name
	mov rsi, 0x1FF; 0777
	mov rax, 0x53; 0x53 syscall number mkdir
	syscall
	ret

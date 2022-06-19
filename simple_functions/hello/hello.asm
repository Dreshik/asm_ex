section .data
text_str: db "Hello from asm function", 10

section .text
global hello
hello:
	mov rdi, 0x01; fd
	mov rsi, $text_str; const char* buf
	mov rdx, 0x18; len(text_str)
	mov rax, 0x01; syscall number write
	syscall
	ret

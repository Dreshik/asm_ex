section .data

section .text
global factorial
factorial:
;first arg in rdi
	mov rax, 1
	count:
		imul rax, rdi; rax=rax*rdi
		dec rdi; rdi=rdi-1
		cmp rdi, 1; rdi > 1?
		jg count; jump if gather
	ret; ret val in rax

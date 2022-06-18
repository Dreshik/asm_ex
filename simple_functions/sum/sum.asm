section .text
global sum
sum:
	mov eax, edi; first arg
	add eax, esi; second arg
	add eax, edx
	add eax, ecx
	add eax, r8d
	add eax, r9d; sixth arg
	ret; ret val in rax

section .data
	hello db 'Hello, Holberton', 0xA, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, hello
	xor eax, eax
	call printf
	mov eax, 0x0A
	call printf
	pop rbp
	ret

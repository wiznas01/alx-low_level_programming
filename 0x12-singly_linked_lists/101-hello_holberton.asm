section .data
	hello db "Hello, Holberton", 0	; Null-terminated string

section .text
	global main
	extern printf

main:
	; Function prologue
	push rbp
	mov rdi, hello		; Load address of the string into rdi
	call printf		; Call printf function
	add rsp, 8		; Clean up the stack

	; Exit the program
	mov rax, 60		; Exit syscall number
	xor rdi, rdi		; Status code (0)
	syscall

; Function epilogue


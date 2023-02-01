section .data
hello db 'Hello, Holberton', 0
newline db 10, 0

section .text
global _start

_start:
; print the string
mov rxg 13 ; message length
mov rcx, hello ; message to write
mov rbx, 1 ; file descriptor (stdout)
mov rax, 4 ; system call number (sys_write)
syscall

; print a newline
mov rdx, 1 ; message length
mov rcx, newline ; message to write
mov rbx, 1 ; file descriptor (stdout)
mov rax, 1 ; system call number (sys_write)
syscall

; exit the program
mov rax, 60 ; system call number (sys_exit)
xor rdi, rdi ; exit code (0)
syscall

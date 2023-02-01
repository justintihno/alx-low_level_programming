section .data
hello db 'Hello, Holberton', 0
section .text
global _start
_start:
; print the string
mov edx, 13 ; message length
mov ecx, hello ; message to write
mov ebx, 1 ; file descriptor (stdout)
mov eax, 4 ; system call number (sys_write)
int 0x80 ; call kernel
; print a newline
mov edx, 1 ; message length
mov ecx, newline ; message to write
mov ebx, 1 ; file descriptor (stdout)
mov eax, 4 ; system call number (sys_write)
int 0x80 ; call kernel
; exit the program
mov eax, 1 ; system call number (sys_exit)
xor ebx, ebx ; exit code (0)
int 0x80 ; call kernel
section .data
newline db 10, 0

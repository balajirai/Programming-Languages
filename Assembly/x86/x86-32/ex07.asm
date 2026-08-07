global _start

section .data
    addr db "yellow", 0x0a

section .text
_start:
    mov [addr], byte 'H'    ; addr points to beginning of the string
    mov [addr+5], byte '!'  ; addr + 5 point to 6th character of string
    mov eax, 4              ; sys_write system call
    mov ebx, 1              ; stdout file descriptor
    mov ecx, addr           ; bytes to write
    mov edx, 7              ; number of bytes to write
    int 0x80                ; perform system call

    mov eax, 1              ; sys_exit system call
    mov ebx, 0              ; exit status is 0
    int 0x80
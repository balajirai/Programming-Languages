section .data
    message db 'Hello, World!', 0x0A, 0  ; String with newline and null terminator

section .text
    global _start

_start:
    ; Write 'Hello, World!\n' to the screen
    mov edx, 14         ; message length (13 characters + 1 for newline)
    mov ecx, message    ; message address
    mov ebx, 1          ; file descriptor (stdout)
    mov eax, 4          ; system call for write
    int 0x80            ; interrupt to execute syscall

    ; Exit the program
    mov eax, 1          ; system call for exit
    xor ebx, ebx        ; exit code 0
    int 0x80
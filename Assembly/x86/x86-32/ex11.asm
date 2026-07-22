global _start

_start:
    call func
    mov eax, 1
    mov ebx, 0
    int 0x80

func:
    push ebp
    mov ebp, esp
    sub esp, 4
    mov [esp], byte 'H'
    mov [esp+1], byte 'i'
    mov [esp+2], byte '!'
    mov [esp+3], byte 0x0a
    mov eax, 4    ; sys_write system call
    mov ebx, 1    ; stdout file descriptor
    mov ecx, esp  ; bytes to write
    mov edx, 4    ; number of bytes to write
    int 0x80      ; perform system call

    mov esp, ebp
    pop ebp
    ret
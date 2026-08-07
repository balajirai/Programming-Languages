global _start

_start:
    push 21          ; Push the value 21 onto the stack
    call times2      ; Call the function 'times2'
    mov ebx, eax     ; Move the result from eax to ebx
    mov eax, 1       ; Syscall number for exit
    int 0x80         ; Trigger system call to exit

times2:
    push ebp          ; Save the base pointer
    mov ebp, esp      ; Set base pointer to current stack pointer
    mov eax, [ebp+8]  ; Get the function argument (value 21)
    add eax, eax      ; Double the value
    mov esp, ebp      ; Restore the original stack pointer
    pop ebp           ; Restore the base pointer
    ret               ; Return to the caller

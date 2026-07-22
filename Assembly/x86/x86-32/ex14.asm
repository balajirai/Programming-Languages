global add42

add42:
    push ebp
    mov ebp, esp
    mov eax, [ebp+8]
    add eax, 42
    mov esp, ebp
    pop ebp
    ret

; Assemble: nasm -f elf32 ex14.asm -o ex14.o
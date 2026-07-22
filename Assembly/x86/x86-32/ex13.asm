global main           ; Declare the main entry point

extern printf         ; Tell the assembler we are using the printf function

section .data
    msg db "Testing %i...", 0x0a, 0x00  ; Define the format string with a newline and null terminator

section .text
main:
    push ebp           ; Save the old base pointer
    mov ebp, esp       ; Establish a new stack frame
    push 123           ; Push the integer 123 onto the stack (argument to printf)
    push msg           ; Push the address of the format string onto the stack
    call printf        ; Call the printf function
    add esp, 8         ; Clean up the stack (remove the two pushed arguments)
    mov eax, 0         ; Set return value to 0 (optional, as it's not used here)
    mov esp, ebp       ; Restore the stack pointer
    pop ebp            ; Restore the old base pointer
    ret                ; Return from the program



; Assemble: nasm -f elf32 ex13.asm -o ex13.o
; Linking : gcc -m32 -no-pie ex13.o -o ex13 (You may need (32bit libraries): sudo apt install gcc-multilib g++-multilib libc6-dev-i386)
; Execute : ./ex13
%include "io.inc"

section .text
global CMAIN
CMAIN: ; Retornar ímpares em um intervalo de números naturais de 1 a [num]
    MOV ECX, 1
    MOV EBX, 0
    iterate:
        MOV EAX, ECX        
        AND EAX, 1
        JNZ is_odd
                
        JMP next_iteration
              
    is_odd:
        INC EBX
        PRINT_UDEC 4, ECX
        PRINT_STRING " "
    
    next_iteration:
        INC ECX
        CMP EBX, [num]
        JL  iterate
        
        RET
    
    
section .data

num dd 10
%include "io.inc"

section .text
global CMAIN
CMAIN:
    MOV ECX, [num]
    MOV EAX, [num]
    
    fatorial_loop:
        CMP ECX, 1
        JE end
        SUB ECX, 1
        IMUL EAX, ECX
        
        JMP fatorial_loop
    end:
        PRINT_UDEC 4, EAX
    RET
    
SECTION .data
    
    num DD 9
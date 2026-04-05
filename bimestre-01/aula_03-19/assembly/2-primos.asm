%include "io.inc"

section .text
global CMAIN
CMAIN: ; Definir se um número é primo ou não
    MOV EAX, [num]
    MOV ECX, EAX
    SUB ECX, 1
    XOR EDX, EDX          ; eu li em algum canto da internet que é importante limpar
                        ; esse cara para divisão
    
    divide:
        CMP ECX, 1
        JE eh_primo
        MOV EBX, ECX
        DIV EBX
        CMP EDX, 0
        JE nao_eh_primo
        MOV EAX, [num]
        XOR EDX, EDX
        SUB ECX, 1
        JMP divide
    eh_primo:
        PRINT_UDEC 4, num
        PRINT_STRING " Primo"
        ret
    nao_eh_primo:
        PRINT_UDEC 4, num
        PRINT_STRING " Não primo"
    ret
 
section .data
    
    num DD 18
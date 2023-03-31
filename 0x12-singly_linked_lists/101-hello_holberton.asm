global main

extern printf

section .data
    hello db "Hello, Holberton", 0xA, 0

section .text
main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    mov eax, 0
    call printf

    mov eax, 0
    leave
    ret


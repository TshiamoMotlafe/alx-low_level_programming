section .data
    hello db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    global print_hello
    extern printf

print_hello:
    push rbp
    mov rdi, fmt
    mov rsi, hello
    call printf
    pop rbp
    ret


org 0x0
bits 16


%define ENDL 0x0D, 0x0A


start:
    call cls
    call hide_cursor

    mov si, msg_bar
    call print
    mov si, msg_title
    call print
    mov si, msg_bar
    call print

    mov dl, 0
    mov dh, 4
    call set_cursor

    mov si, msg_kernel_success
    call print

    jmp main

halt:
    cli
    hlt

print:
    push si
    push ax
    push bx

    .loop:
        lodsb
        or al, al
        jz .done

       mov ah, 0x0E
       mov bh, 0
       int 0x10

       jmp .loop

    .done:
       pop bx
       pop ax
       pop si    
       ret

cls:
    pusha

    mov ah, 0x00
    mov al, 0x03
    int 0x10

    popa
    ret

hide_cursor:
    pusha

    mov cx, 0x2607
    mov ah, 0x01
    int 0x10

    popa
    ret

set_cursor:
    pusha

    mov ah, 0x02
    mov bh, 0x00

    int 0x10

    popa
    ret

delay:
    pusha
    mov cx, 0x0F
    mov dx, 0x4240
    mov ah, 0x86
    int 0x15
    popa
    ret

main:
    jmp main

file:                   db 'KEYS    BIN'
msg_title:              db '| Micro OS |', ENDL, 0
msg_bar:                db '+----------+', ENDL, 0
msg_kernel_success:     db 'Kernel Loaded Successfully!', ENDL, 0

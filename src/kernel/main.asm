org 0x0		                	; Offset for the kernel is 0.
bits 16		                	; We are still in 16-Bit Real-Mode, however we wil change to 32-Bit soon.


%define ENDL 0x0D, 0x0A


start:			                ; Start process will hide the cursor, clear the screen, and print the text.
    call cls		
    call hide_cursor

    mov si, msg_bar	            ; Top bar
    call print
    mov si, msg_title	        ; Micro-OS Title
    call print
    mov si, msg_bar	            ; Bottom Bar
    call print

    mov dl, 0		            ; dl = y position of cursor
    mov dh, 4		            ; dh = x position of cursor
    call set_cursor	            ; set_cursor process sets the position of the cursor, relevant to dl:dh

    mov si, msg_kernel_success	; Message to say the kernel sucessfully loaded.
    call print

    jmp main			        ; Jumps to the main loop.

halt:				            ; If processes need to halt the computer, this process will be used.
    cli				            ; CLI prevents any interrupts from being used.
    hlt				            ; Halts the program.

print:				            ; This process will have an input of si, si is the string being printed.
    push si			            ; Stores essential registers that will be modified
    push ax
    push bx

    .loop:			            ; .loop will iterate through all of the characters
        lodsb
        or al, al
	    jz .done		        ; If all the characters have been printed, go to .done

	    mov ah, 0x0E	        ; Displays the character when int 0x10 is called
	    mov bh, 0		        ; Sets the screen number to 0.
	    int 0x10		        ; Updates the display

    jmp .loop                   ; Repeats the loop

    .done:                      ; .done will restore modified registers, and return to the call point.
	    pop bx
	    pop ax
	    pop si    
	    ret

cls:                            ; This process will clear the screen.
    pusha                       ; Stores all registers

    mov ah, 0x00                ; Resets the ah register, this will cause the screen to clear when al == 0x03
    mov al, 0x03                ; Sets al to 0x03, this will set the function called by int 0x10 to resetting the display, and setting it to 80x25 text mode.
    int 0x10                    ; int 0x10 is used for all video functions.

    popa                        ; Restores modified registers
    ret                         ; Returns to the call point

hide_cursor:                    ; This process will hide the cursor
    pusha                       ; Stores all registers

    mov cx, 0x2607              ; Sets bit 5 of the cx register. This is used in most systems to hide the cursor.
    mov ah, 0x01                ; Sets the ah register to 0x01. This will change the cursor mode when int 0x10 is called.
    int 0x10                    ; Calls the interrupt.

    popa                        ; Restores the modified registers
    ret                         ; Returns to the main loop

set_cursor:                     ; This process will set the cursor position, relative to dl:dh
    pusha                       ; Stores all registers

    mov ah, 0x02                ; Setting ah to 0x02 will allow us to change the cursor position on the screen.
    mov bh, 0x00                ; Sets the screen number to 0.

    int 0x10                    ; Moves the cursor

    popa                        ; Restores modified registers
    ret                         ; Returns to the call point

delay:                          ; If a delay is needed, this process will be called.
    pusha                       ; Stores all registers
    mov cx, 0x0F                ; Sets cx to 0x0F. when int 0x15 is called, it will delay relative to cx:dx
    mov dx, 0x4240              ; Sets dx to 0x4240.
    mov ah, 0x86                ; Sets the function called by int 0x15 to delay.
    int 0x15                    ; Delays the program by cx:dx milliseconds.
    popa                        ; Restores modified registers
    ret                         ; returns to the call point.

main:                           ; The main loop
    jmp main                    ; Restarts the loop

;; VARIABLE DEFINITION

msg_title:              db '| Micro OS |', ENDL, 0
msg_bar:                db '+----------+', ENDL, 0
msg_kernel_success:     db 'Kernel Loaded Successfully!', ENDL, 0

[org 0x7c00]
mov ax, 0x07c0
mov ds, ax
; Jump to kernel (assume it is loaded at address 0x1000)
jmp 0x1000
times 510 - ($ - $$) db 0
dw 0xAA55


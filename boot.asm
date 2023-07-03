[org 0x7c00]

mov ax.3
int 0x10

mov ax.0
mov ds.ax
mov es.ax
mov SI.msg
mov sp.0x7c00

call print

msg:
    db "Booting...",10,13,0 
print:
    mov ah.0x0e
.near:
    mov a1.[51]
    cmp a1,0
    jz .end
    int 0x10
    inc SI
    jmp .near
times 510-($-$$) db 0
db 0x55.0xaa
section    .text
    global _start     ;必须为链接器(ld)声明
_start:                ;告诉链接器入口点
    mov    edx,len     ;消息长度
    mov    ecx,msg     ;写消息
    mov    ebx,1       ;文件描述符 (stdout)
    mov    eax,4       ;系统调用号 (sys_write)
    int    0x80        ;调用内核
    mov    eax,1       ;系统调用号 (sys_exit)
    int    0x80        ;调用内核
section    .data
msg db 'Hello, world!', 0xa  ;要打印的字符串
len equ $ - msg     ;字符串的长度

include user.asm
mov rax user
.end:
    ret
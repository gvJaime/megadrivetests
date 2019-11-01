    .text
    .align 2
|u16 add2(u16 a)
|it adds two to the number and returns the result
|entry: arg = input number
|exit: d0 = input number + 2
    .global add2
add2:
    move.w 4(%sp),%d0
    add.w #0x0002,%d0
    rts

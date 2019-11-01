    .text
    .align 2
|u16 add2(u16 a)
|it adds two to the number and returns the result
|args first = input number
    .global add2
add2:
    move.w 4(sp),d1
    move.w $2,d0
    add.w d1,d0
    rts
/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/

#include <stdio.h>

int main() {

    int input , n = 0, sum = 1 , before = 1, after = 0 ;
    printf( "Enter value n :\n" ) ;
    scanf( "%d" , &input ) ;
    printf( "Series = : " ) ;
    if ( input == 1 ) {
        printf("%d", sum ) ;
        n += sum ;
    } else {
        for (int i = 0; i < input; i++) {
            sum = before + after ;
            printf( "%d", sum ) ;
            printf( i + 1 != input ? " + " : "" ) ; //ใช้ตรวจเงื่อนไขการวาง +
            before = after ;
            after = sum ;
            n += sum ;
        }//end for แสดงอนุกรมฟีโบนัชชี
    }//end if ถ้าเป็น 1
    
    printf( "\nSum = %d", n ) ;
    
    return 0 ;
    
}//end function main

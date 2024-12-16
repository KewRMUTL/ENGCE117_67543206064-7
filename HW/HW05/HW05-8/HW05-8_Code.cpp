/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/

#include <stdio.h>

int main() {
    
    int input = 0 , input2 = 0 , input3 = 0 ;

    printf( "Input : " ) ;
    scanf( "%d %d %d" , &input , &input2 , &input3 ) ;

    printf( "Output :\n" ) ;
    printf( "1st Number = %d\n" , input ) ;
    printf( "2st Number = %d\n" , input2 ) ;
    printf( "3st Number = %d\n" , input3 ) ;
   
    if ( input > input2 && input > input3 ) {
        printf( "The 1rd Number is the greatest among three" ) ;
    } else if ( input2 > input && input2 > input3 ) {
        printf( "The 2nd Number is the greatest among three" ) ;
    } else {
        printf( "The 3rd Number is the greatest among three" ) ;
    }//end if else หาตัวมากสุด
    
    return 0 ;
    
}//end function main

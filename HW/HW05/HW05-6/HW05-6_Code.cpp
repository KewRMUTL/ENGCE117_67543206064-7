/*
    จงรับค่าจากผู้ใช้ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/

#include <stdio.h>

int main() {
    int input = 0 ;

    printf( "Input :\n" ) ;
    scanf( "%d" , &input ) ;

    printf( "\nOutput:\n" ) ;
    if ( input > 0) { 
        printf( "Positive" ) ;
    } else if ( input < 0 ) {
        printf( "Negative" ) ;
    } else {
        printf( "Zero" ) ;
    }//end if ตรวจเช็ก
    
    return 0 ;
    
}//end function main

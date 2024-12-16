/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/

#include <stdio.h>

int main() {
    float x1 = 0 , x2 = 0 , y1 = 0 , y2 = 0 ;

    printf( "Input A Point : " ) ;
    scanf( "%f %f" , &x1 , &x2 ) ;
    printf( "Input B Point : " ) ;
    scanf( "%f %f" , &y1 , &y2 ) ;

    printf( "\nOutput:\n" ) ;
    printf( "Mid Point of A and B is ( %.1f , %.1f )" , ( x1 + y1 ) / 2 , ( x2 + y2 ) / 2 ) ;    //หาจุดกึ่งกลาง

    return 0 ;
    
}//end function main

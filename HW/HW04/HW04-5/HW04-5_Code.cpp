/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/

#include <stdio.h>

int main () {
    int Day = 0 ;
    printf( "Input Days : " ) ;
    scanf( "%d" , &Day ) ;
    printf( "%d days = %d seconds" , Day , Day * 24 * 60 * 60 ) ;

    return 0 ;
    
}//end function main

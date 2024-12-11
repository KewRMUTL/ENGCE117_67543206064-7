/*
โจทย์

จงเขียนโปรแกรมแสดงคำว่า Hello World จำนวน n บรรทัด (โดย n คือตัวเลขที่รับมาจากผู้ใช้)

FIX CODE

#include <stdio.h>
TEST CASE

Input

5
Output

[1] Hello world
[2] Hello world
[3] Hello world
[4] Hello world
[5] Hello world
*/

#include <stdio.h>

int main() {

    int input = 0 ;

    printf( "Enter start number : " ) ;    
    if ( scanf( "%d" , &input ) != 1 ) {
        printf( "Please enter number only." ) ;
    } else {
        for ( int i = 1 ; i <= input ; i++ ) {
            printf( "[ %d ] Hello world \n" , i ) ;
        }//end for
        
    }//end if 

    return 0 ;
    
}//end main

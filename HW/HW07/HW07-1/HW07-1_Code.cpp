/*
    ผู้ใช้กรอกจำนวนตัวเลข เพื่อพิมพ์คำว่า "Hello World" ตามจำนวนบรรทัดที่ผู้ใช้กรอก
    หากผู้ใช้กรอกเลขคี่ ให้แสดงเลขบรรทัดโดยใช้ []
    หากผู้ใช้กรอกเลขคู่ ให้แสดงเลขบรรทัดโดยใช้ ()
    (โจทย์ข้อนี้ให้ใช้ While Loop เท่านั้น)

    Test case:
        10
    Output:
        (1) Hello World
        (2) Hello World
        (3) Hello World
        (4) Hello World
        (5) Hello World
        (6) Hello World
        (7) Hello World
        (8) Hello World
        (9) Hello World
        (10) Hello World

    Test case:
        7
    Output:
        [1] Hello World
        [2] Hello World
        [3] Hello World
        [4] Hello World
        [5] Hello World
        [6] Hello World
        [7] Hello World

*/

#include <stdio.h>

int main() {
    int input = 0 , round = 1 ;
    printf( "Enter number : " ) ;
    scanf( "%d" , &input ) ;
    
    printf( "Output:\n" ) ;
    while ( input % 2 == 0 ) {
        while ( round != input + 1 ) {
            printf( "(%d) Hello World\n" , round ) ;
            round ++ ;
        }//end while แสดงผลตาม input
        break ;
    }//end while ถ้าเป็นเลขคู่
    
    while ( input % 2 == 1 ) {
        while ( round != input + 1 ) {
            printf( "[%d] Hello World\n" , round ) ;
            round ++ ;
        }//end while แสดงผลตาม input
        break ;
    }//end while ถ้าเป็นเลขคี่

    return 0 ;
    
}//end function main 

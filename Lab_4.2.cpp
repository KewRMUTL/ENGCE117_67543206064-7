 /*
โจทย์

เมื่อพอยน์เตอร์ 2 ระดับถูกประกาศใน main() แล้วฟังก์ชันย่อยจะเปลี่ยนการชี้ไปที่อื่นๆ ได้อย่างไร? และจะนำข้อมูลที่ชี้อยู่มาใช้งานในฟังก์ชันได้อย่างไร?

FIX CODE

#include <stdio.h>

void go( int ***p, int **z ) ;

int main() {
    int *b = new int ; *b = 10 ;
    int *c = new int ; *c = 20 ;
    int **a ;
    go( &a, &b ) ;
    printf( "%d %p %p %p \n", **a, *a, a, &a ) ;
    go( &a, &c ) ;
    printf( "%d %p %p %p \n", **a, *a, a, &a ) ;
    return 0 ;
}//end function
*/

#include <stdio.h>
#include <stdlib.h>

void go( int ***p, int **z ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address

int main() {
    int *b = ( int * ) malloc( sizeof( int ) ) ;     //ขอพื้นที่ 4 ไบต์ สำหรับตัวแปร int
    *b = 10 ;
    int *c = ( int * ) malloc( sizeof( int ) ) ;     //ขอพื้นที่ 4 ไบต์ สำหรับตัวแปร int
    *c = 20 ;
    int **a ;

    go( &a, &b ) ;
    printf( "**a = %d, *a = %p, a = %p, &a = %p \n", **a, *a, a, &a ) ;
    go( &a, &c ) ;
    printf( "**a = %d, *a = %p, a = %p, &a = %p \n", **a, *a, a, &a ) ;

    return 0 ;
}//end function

void go( int ***p, int **z ) {
    *p = z ; 
}//end go

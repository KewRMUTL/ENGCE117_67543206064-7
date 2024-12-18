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

void go( int ***p, int **z ) ;

int main() {
    int b = 10 ;     //สร้างตัวแปร b
    int c = 20 ;     //สร้างตัวแปร c

    int *pb = &b ;   //ตัวชี้ pb ชี้ไปยัง b
    int *pc = &c ;   //ตัวชี้ pc ชี้ไปยัง c

    int **a ;        //ตัวชี้ระดับสอง

    go( &a, &pb ) ;  //ให้ a ชี้ไปยัง pb
    printf( "**a = %d, *a = %p, a = %p, &a = %p\n", **a, ( void* )*a, ( void* )a, ( void* )&a ) ;

    go( &a, &pc ) ;  //ให้ a ชี้ไปยัง pc
    printf( "**a = %d, *a = %p, a = %p, &a = %p\n", **a, ( void* )*a, ( void* )a, ( void* )&a ) ;

    return 0 ;
    
}//end function main

void go( int ***p, int **z ) {
    *p = z ;         //ให้ *p ชี้ไปยังที่อยู่ของ z ซึ่งเป็น int**
    
}//end void go

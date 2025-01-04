/*
โจทย์

เมื่อพอยน์เตอร์ 1 ระดับ ถูกประกาศใน main() แล้วฟังก์ชันย่อยจะเปลี่ยนการชี้ไปที่อื่นๆ ได้อย่างไร? และจะนำข้อมูลที่ชี้อยู่มาใช้งานในฟังก์ชันได้อย่างไร?

FIX CODE

#include <stdio.h>

void go( int **p, int *z ) ;

int main() {
    int *a, b = 10, c = 20 ;
    go( &a, &b ) ;
    printf( "%d %p %p\n", *a, a, &a ) ;
    go( &a, &c ) ;
    printf( "%d %p %p\n", *a, a, &a ) ;
    return 0 ;
}//end function
*/

#include <stdio.h>

void go( int **p, int *z ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address

int main() {
    int *a, b = 10, c = 20 ;

    //ครั้งที่ 1 ให้ `a` ชี้ไปยัง `b`
    go( &a, &b ) ;
    printf( "%d %p %p\n", *a, ( void * )a, ( void * )&a ) ;

    //ครั้งท่ี 2 ให้ `a` ชี้ไปยัง `c`
    go( &a, &c ) ;
    printf( "%d %p %p\n", *a, ( void * )a, ( void * )&a ) ;

    return 0 ;
    
}//end function main

void go( int **p, int *z ) {     //ฟังก์ชัน go ใช้เปลี่ยนพอยน์เตอร์ให้ชี้ไปยังที่อยู่ใหม่
    *p = z ;                     //เปลี่ยนให้พอยน์เตอร์ **p ชี้ไปยังที่อยู่ที่ z ชี้อยู่
    
}//end void go

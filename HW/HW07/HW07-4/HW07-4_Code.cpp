/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/

#include <stdio.h>

int isPrime( int num ) ;

int main() {
    int num ;

    printf( "Enter number : " ) ;
    scanf( "%d" , &num ) ;

    int i = num ;
    printf( "Output:\n" ) ;
    do {
        int prime = isPrime( i ) ;
        while  ( prime ) {
            printf( "%d " , i ) ;
            prime = 0 ;
        }//end while
        
        i-- ;
        
    } while ( i >= 2 ) ;  //end do while
    
    printf( "\n" ) ;
    
    return 0 ;
    
}//end function main

int isPrime( int num ) {
    int i = 2 ;
    int prime = 1 ;

    while ( i * i <= num ) {
        prime = prime * ( num % i != 0 ) ; 
        i++ ;
    }//end while
    
    return prime ;
    
}//end function isPrime

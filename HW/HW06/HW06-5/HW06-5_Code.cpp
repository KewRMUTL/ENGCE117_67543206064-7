/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
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

int main() {
    int input = 0 ;
    printf( "Enter number : " ) ;
    scanf( "%d" , &input ) ;

    for ( int i = input ; i >= 2 ; i-- ) { //เริ่มจากตัวท้าย
        int isPrime = 1 ; 
        for ( int j = 2 ; j * j <= i ; j++ ) { // ตรวจหาตัวหาร
            for ( ; i % j == 0 ; ) {
                isPrime = 0 ;
                break ; 
            }//end for
        }//end for
        
        for ( ; isPrime == 1 ; ) {    //ใช้ for เพื่อแทน if
            printf( "%d ", i ) ;
            break ; // พิมพ์แค่ครั้งเดียวสำหรับจำนวนเฉพาะนั้น
        }//end for ปริ้นจำนวนเฉพาะ
    }//end for วนรอบ

    return 0 ;
    
}//end function main 

/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด

FIX CODE

#include <stdio.h>

struct student (*GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function
*/

#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[ 20 ] ;
    int Age ;
} ; 

struct student ( *GetStudent( int *room ) )[ 10 ] ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    //ใช้ malloc เพื่อจัดสรรหน่วยความจำสำหรับอาร์เรย์ 2 มิติ ขนาด room x 10 (จำนวนห้อง x 10 นักเรียน) โดยการแปลง (cast) ค่า void* ที่คืนจาก malloc ไปยังประเภท struct student (*)[10]
    children = ( struct student( * )[ 10 ] ) malloc( group * sizeof( struct student[ 10 ] ) ) ;     //จัดสรรหน่วยความจำสำหรับข้อมูลนักเรียน (จำนวนห้อง * 10 นักเรียน)

    for ( int  i = 1 ; i <= group ; i++ ) {
        printf( "Room %d:\n" , i ) ;
        for ( int  j = 1 ; j <= 10 ; j++ ) {
            printf( "Student %d:\n" , j ) ;
            printf( "Enter name : " ) ;
            scanf( "%s" , children[ i ][ j ].name ) ;
            printf( "Enter Age : " ) ;
            scanf( "%d" , &children[ i ][ j ].Age ) ;
        }//end for j หลัก
    }//end for i แถว

    printf( "\n" ) ;

    for ( int i = 1 ; i <= group ; i++ ) {
        printf( "Room %d: 10 students entered.\n" , i ) ;
    }//end for print room entered

    return 0 ;

}//end function

struct student ( *GetStudent( int *room ) )[ 10 ] {
    printf( "Enter Room: " ) ;
    scanf( "%d" , room ) ;
    return 0 ;
}//end struct student

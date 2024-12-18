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
#include <stdlib.h>     //สำหรับ malloc()

//โครงสร้าง student ใช้เก็บข้อมูลนักเรียน (ชื่อและอายุ)
struct student {
    char name[ 20 ] ;     //ชื่อนักเรียน (สูงสุด 19 ตัวอักษร + 1 สำหรับ '\0')
    int age ;            //อายุของนักเรียน
} ; //end struct student


struct student ( *GetStudent( int *room ) )[ 10 ] ;     //ฟังก์ชัน GetStudent ซึ่งรับตัวแปรจำนวนห้องเรียน

int main() {
    struct student( *children )[ 10 ] ;     //ประกาศตัวแปร children ซึ่งจะเก็บข้อมูลของนักเรียนในแต่ละห้อง
    int group ;     //ตัวแปรเก็บจำนวนห้องที่ผู้ใช้ป้อน

    children = GetStudent( &group ) ;     //เรียกใช้ฟังก์ชัน GetStudent เพื่อรับข้อมูลนักเรียนจากผู้ใช้

    printf("\n-----------------------------------------------------\n");
    for ( int i = 0 ; i < group ; i++ ) {     //พิมพ์ข้อมูลนักเรียนในแต่ละห้อง
        printf( "Room %d:\n", i + 1 ) ;
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: %s, Age: %d\n", j + 1, children[i][j].name, children[i][j].age);
        }//end for
        
        printf( "Room %d: 10 students entered.\n", i + 1 ) ;     //แสดงข้อความหลังกรอกข้อมูลครบ
        
    }//end for
    
    printf("\n-----------------------------------------------------\n");

    free( children ) ;     //ปล่อยหน่วยความจำที่จัดสรรไว้
    
    return 0 ;
    
}//end function main

struct student( *GetStudent( int *room ) )[ 10 ] {     //ฟังก์ชัน GetStudent ใช้รับข้อมูลนักเรียนจากผู้ใช้
    printf( "Enter number of rooms: " ) ;     //จำนวนห้อง
    scanf( "%d", room ) ;

    //ใช้ malloc เพื่อจัดสรรหน่วยความจำสำหรับอาร์เรย์ 2 มิติ ขนาด room x 10 (จำนวนห้อง x 10 นักเรียน) โดยการแปลง (cast) ค่า void* ที่คืนจาก malloc ไปยังประเภท struct student (*)[10]
    struct student ( *students )[ 10 ] = ( struct student( * )[ 10 ] )malloc( *room * 10 * sizeof( struct student ) ) ;      //จัดสรรหน่วยความจำสำหรับข้อมูลนักเรียน (จำนวนห้อง * 10 นักเรียน)
    if ( students == NULL ) {     //ตรวจสอบการจัดสรรหน่วยความจำ
        printf( "Memory allocation failed!\n" ) ;
        exit( 1 ) ;     //ออกจากโปรแกรมหากการจัดสรรหน่วยความจำล้มเหลว
    }//end if

    for ( int i = 0 ; i < *room ; i++ ) {     //รับข้อมูลนักเรียนแต่ละห้อง
        printf( "Room %d:\n", i + 1 ) ;
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: ", j + 1 ) ;
            scanf( "%s", students[ i ][ j ].name ) ;     //รับชื่อ
            printf( "Age: " ) ;    //รับอายุ
            scanf( "%d", &students[ i ][ j ].age ) ;
        }//end for
        
    }//end for จำนวนห้อง (Room)

    return students ;     //คืนค่าตัวชี้ไปยังอาร์เรย์ของนักเรียนที่จัดสรรหน่วยความจำ
    
}//end function struct student

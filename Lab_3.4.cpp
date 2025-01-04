/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด

FIX CODE

#include <stdio.h>

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function
*/

#include <stdio.h>

struct student {     //โครงสร้าง student
    char name[ 20 ] ;
    int age ;
} ; //end struct student

void GetStudent( struct student child[][ 10 ], int *room ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address

int main() {
    struct student children[ 20 ][ 10 ] ;     //ห้องเรียนสูงสุด 20 ห้อง
    int group ;
    printf( "Enter number of groups : " ) ;
    scanf( "%d", &group ) ;                  //รับจำนวนห้องเรียน
    GetStudent( children, &group ) ;         //เรียกใช้ฟังก์ชันเพื่อกรอกข้อมูล
    
    return 0 ;
    
}//end function main


void GetStudent( struct student child[][ 10 ], int *room ) {     //ฟังก์ชัน GetStudent เพื่อรับข้อมูลนักเรียน
    for ( int r = 0 ; r < *room ; r++ ) {
        printf( "Room %d:\n", r + 1 ) ;
        for ( int s = 0 ; s < 10 ; s++ ) {
            printf( "Student %d: ", s + 1 ) ;
            scanf( "%s", child[ r ][ s ].name ) ;                //รับชื่อ
            printf( "Age: " ) ;
            scanf( "%d", &child[ r ][ s ].age ) ;                //รับอายุ
        }//end for นักเรียน 10 คน
        
        printf( "Room %d: 10 students entered.\n", r + 1 ) ;     //แสดงข้อความหลังกรอกข้อมูลครบ
    
    }//end for จำนวนห้อง (Room)
    
}//end void GetStudent

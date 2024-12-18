/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน upgrade() ตามโปรโตไทป์ต่อไปนี้ เพื่อเพิ่ม gpa ขึ้นอีก 10% สำหรับผู้ชาย และ 20% สำหรับผู้หญิง (ให้สังเกตด้วยว่าหลังเรียกใช้ฟังก์ชันแล้ว gpa เพิ่มขึ้นหรือไม่)

FIX CODE

#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function
*/

#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ; //end struct student

void upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;     //GPA ไม่เปลี่ยนแปลงเพราะ pass by value
    
    return 0 ;
    
}//end function main

void upgrade( struct student child ) {
    if ( child.sex == 'M' ) {
        if ( child.gpa <= 3.00 ) {
            child.gpa *= 1.10 ;     //เพิ่ม 10% ให้ผู้ชาย
        }//end if gpa for M
        
    } else if (child.sex == 'F') {
        if ( child.gpa <= 3.00 ) {
            child.gpa *= 1.20 ;     //เพิ่ม 20% ให้ผู้หญิง
        }//end if gpa for F
        
    }//end if sex for M, F
    
}//end void upgrade

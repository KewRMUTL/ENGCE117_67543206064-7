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

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
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
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

struct student upgrade( struct student child ) {
     if ( child.gpa < 4.00 ) {
        if ( child.sex == 'M') {
            child.gpa = ( child.gpa  * 0.1 ) + child.gpa ;
        } else if ( child.sex == 'F' ) {
            child.gpa = ( child.gpa  * 0.2 ) + child.gpa ;
        }//end if check sex

    }//end if GPA ต้องตำกว่า 4.00

    if ( child.gpa > 4.00 ) {
        child.gpa = 4.00 ;
    }//end if จะไม่เพิ่มเกรดเกิน 4.00
    
    return child ;

}//end struct student upgrade

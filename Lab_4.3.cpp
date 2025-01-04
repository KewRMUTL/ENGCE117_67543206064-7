/*
โจทย์
จากการสร้างสตรัคท์ studentNode ,​ประกาศตัวแปร และกำหนดค่าใน main ดังต่อไปนี้ จงเขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GoNext1()
ตามโปรโตไทป์ต่อไปนี้ เพื่อตรวจว่ามีโหนดถัดไปหรือไม่ ถ้ามีก็ให้เปลี่ยน now1 ไปชี้ที่ข้อมูลโหนดถัดไป และแสดงข้อมูลในโหนดนั้น
(สังเกตด้วยว่าหลังเรียกใช้ฟังก์ชันแล้ว now1 เปลี่ยนที่ชี้หรือไม่)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ; //end struct studentNode

void SaveNode( struct studentNode *child, char n[], int a, char s, float g ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address
void GoNext1( struct studentNode *walk ) ;

int main() {
    char name[ 20 ] = "one" ;
    struct studentNode *start, *now1, **now2 ;
    start = ( struct studentNode * ) malloc( sizeof( struct studentNode ) ) ;
    SaveNode( start , name , 6, 'M', 3.11 ) ;

    char name2[ 20 ] = "two" ;
    start -> next = ( struct studentNode * ) malloc( sizeof( struct studentNode ) ) ;
    SaveNode( start -> next , name2, 8, 'F', 3.22 ) ;

    char name3[ 20 ] = "three" ;
    start -> next -> next = ( struct studentNode * ) malloc( sizeof( struct studentNode ) ) ;
    SaveNode( start->next->next , name3, 10 , 'M', 3.33 ) ;

    char name4[ 20 ] = "four" ;
    start -> next -> next -> next = ( struct studentNode * ) malloc( sizeof( struct studentNode ) ) ;
    SaveNode( start -> next -> next -> next , name4, 12 , 'F', 3.44 ) ;
    
    now1 = start ;     //ตัวขยับ
    now2 = &start ;    //ตัวเริ่ม 

    GoNext1( now1 ) ;
    //printf( "%s " , now1 -> name ) ;

    return 0 ;

}//end function

void SaveNode( struct studentNode *child , char n[] , int a , char s , float g ) {
    strcpy( child -> name, n ) ;
    child -> age = a ;
    child -> sex = s ;
    child -> gpa = g ;
}//end function


void GoNext1( struct studentNode *walk ) {
    if ( walk != NULL ) {
        walk = walk -> next ;     //ทำให้ walk ชี้ไปยังโหนดถัดไป
        printf( "%s %d %c %.2f" , walk -> name , walk -> age , walk -> sex , walk -> gpa ) ;
    }//end if
}//end GoNext1

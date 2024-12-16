/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/

#include <stdio.h>

int main() {

    int input ;
    printf( "Enter score: " ) ;
    scanf( "%d" , &input ) ;

    printf( "Output:\n" ) ;
        for ( ; input >= 80 ; ) {
            printf( "A !" ) ;
            break ;
        } for ( ; input >= 75 && input < 80 ; ) {
            printf( "B+ !" ) ;
            break ;
        } for ( ; input >= 70 && input < 75 ; ) {
            printf( "B !" ) ;
            break ;
        } for ( ; input >= 65 && input < 70 ; ) {
            printf( "C+ !" ) ;
            break ;
        } for ( ; input >= 60 && input < 65 ; ) {
            printf( "C !" ) ;
            break ;
        } for ( ; input >= 55 && input < 60 ; ) {
            printf( "D+ !" ) ;
            break;
        } for ( ; input >= 50 && input < 55 ; ) {
            printf( "D !" ) ;
            break ;
        } for ( ; input < 50 ; ) {
            printf( "F !" ) ;
            break ;
        }//end for ตรวจหาเกรด
        
    return 0 ;
    
}//end function main

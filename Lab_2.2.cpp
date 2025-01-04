/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"

#inclue <stdio.h>
char* reverse( char str1[]) ;
int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function

TEST CASE

Input

  Hello    World  !
Output

! dlroW    olleH  

*/

#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    printf( "Input:\n" ) ;
    fgets( text , sizeof( text ) , stdin) ;  //รับค่าจากผู้ใช้
    text[ strcspn( text , "\n" ) ] = '\0' ;  //ลบ \n เป็นให้ \0 (หรือ Endnewline)
    out = reverse( text ) ;
}//end function

char* reverse( char str1[] ) {
    char reverse [ 50 ] ;   //ตัวแปร string ที่ถูกย้อน
    int length = strlen( str1 ) ; //หาความยาวและนับ string เริ่มจาก 1
    for ( int i = 0 ; i < length ; i++ ) {
        reverse[ i ] = str1[ length - 1 - i ] ; //สลับท้ายไปหน้า ที่ -1 เพราะ arr เริ่ม 0
    }//end for reverse

    printf( "Output:\n" ) ;
    for ( int i = 0 ; i < length ; i++ ) {
        printf( "%c" , reverse[ i ] ) ;
    }//end for print reverse

    return 0 ;

}//end reverse

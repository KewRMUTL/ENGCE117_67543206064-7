/*
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"

#inclue <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function

TEST CASE

Input

I Love You
Output

uoY evaL I
*/

#include <stdio.h>
#include <string.h>

int reverse( char str1[], char str2[] ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address

int main() {
    char text[ 50 ] = "I Love You" ;  // กำหนดข้อความเริ่มต้นใน text
    char out[ 50 ] ;  //ตัวแปรใช้เก็บข้อความย้อนกลับ

    printf( "Input:\n" ) ;
    fgets( text, sizeof( text ), stdin ) ;  //รับค่าจากผู้ใช้และเก็บไว้ใน text
    text[ strcspn( text, "\n" ) ] = '\0' ;  //ลบ '\n' ที่ fgets() เพิ่มเข้ามาในตอนที่รับค่า

    reverse( text, out ) ;  //เรียกฟังก์ชัน reverse เพื่อย้อนกลับข้อความจาก text ไป out

    printf( "Output:\n" ) ;
    printf( "%s", out ) ;

    return 0 ;
    
}//end function main

int reverse( char str1[], char str2[] ) {
    int length = strlen( str1 ) ;

    for( int i = 0 ; i < length ; i++ ) {
        str2[ i ] = str1[ length - 1 - i ] ;  //คัดลอกจาก str1 ในลำดับย้อนกลับไปยัง str2
    }//end for

    str2[ length ] = '\0' ;  // เพิ่ม null terminator ที่ท้ายของ str2 เพื่อให้เป็นข้อความที่ถูกต้อง
    
    return 0 ;
    
}//end function reverse

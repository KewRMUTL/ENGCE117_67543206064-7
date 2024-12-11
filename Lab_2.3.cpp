/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกฟังก์ชัน explode() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มาแยกเป็นหลายข้อความเก็บไว้ใน str2 โดยใช้ตัวอักขระใน splitter เป็นตัวแบ่งแยก และ count เก็บจำนวนข้อความที่แบ่งได้

ตัวอย่างเช่น

str1 = "I/Love/You" splitter = '/'

จะได้ผลลัพธ์คือ

str2[0] = "I"
str2[1] = "Love"
str2[2] = "You" count = 3
FIX CODE

#include <stdio.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", "/" ) ;
    return 0 ;
}//end function

TEST CASE

Input

I/Love/You
Output

str2[0] = "I"
str2[1] = "Love"
str2[2] = "You"
count = 3
*/

#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;  //เก็บคำที่แยกออกมา
    int num = 0 ;           //เก็บจำนวนคำที่แยกได้
    char input[ 100 ] ;     //เก็บข้อความที่ผู้ใช้ป้อน
    char splitter ;         
    
    printf( "Enter your string: " ) ;
    fgets( input, sizeof( input ), stdin ) ;  //รับข้อมูลที่ผู้ใช้ป้อน
    input[ strcspn( input, "\n" ) ] = '\0' ;  //ลบตัว \n จาก fgets

    printf( "Enter your splitter character: " ) ;
    scanf( "%c", &splitter ) ;

    explode( input, splitter, out, &num ) ;     //เรียกใช้ฟังก์ชัน explode

    for ( int i = 0 ; i < num ; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;     //แสดงคำที่แยกแล้ว
    }//end for

    printf( "count = %d\n", num ) ;      //แสดงจำนวนคำที่แยก

    return 0 ;
    
}//end function main

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) {
    char data[ 50 ] ;        //ตัวแปรสำรองเพื่อเก็บข้อมูลจาก str1
    strcpy( data, str1 ) ;        //คัดลอกข้อมูลจาก str1 ไปยัง data

    char *token = strtok( data, &splitter ) ;    //แยกข้อมูลตาม splitter
    *count = 0 ;  //เริ่มคำเป็น 0

    while ( token != NULL ) {     //ลูปแยกคำจาก str1
        strcpy( str2[ *count ], token ) ;       //คัดลอกคำที่แยกได้ไปยัง str2
        ( *count )++ ;            //เพิ่มจำนวนคำที่แยกได้
        token = strtok( NULL, &splitter ) ;     //ใช้ strtok ต่อไปเพื่อแยกคำถัดไป
        
    }//end while
    
}//end explode

/*
โจทย์

เขียนฟังก์ชัน explode() ที่สามารถแยกข้อความใน str1 เป็นหลายๆ ส่วนโดยใช้ตัวอักขระหรือหลายตัวอักขระใน splitters[] เป็นตัวแบ่งแยก ซึ่งจะต้องจัดการกรณีที่มีช่องว่าง หรือค่าที่ไม่ใช่ตัวอักขระในข้อความ โดยเก็บผลลัพธ์ใน str2[] และจำนวนข้อความที่แยกได้ใน count ซึ่งผลลัพธ์จะต้องไม่มีช่องว่างหรือค่าที่ไม่ได้ใช้ในแต่ละคำที่แยกออกมา

ข้อกำหนด

str1: ข้อความที่ต้องการแยก
splitters: ตัวอักขระที่ใช้เป็นตัวแบ่ง (สามารถมีหลายตัวได้)
str2: อาร์เรย์ที่ใช้เก็บผลลัพธ์ที่ได้จากการแยก
count: ตัวแปรที่ใช้เก็บจำนวนข้อความที่แยกได้
ตัวอย่าง Input

str1 = "I,Love World/You"
splitters = ", /"
Output

str2[0] = "I"
str2[1] = "Love"
str2[2] = "World"
str2[3] = "You"
count = 4
FIX CODE

void explode(char str1[], char splitters[], char str2[][10], int *count);

TEST CASE

Input

   Hello  World  From Me
Output

str2[0] = "Hello"
str2[1] = "World"
str2[2] = "From"
str2[3] = "Me"
count = 4
*/

#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter[], char str2[][ 10 ], int *count ) ;

int main() {
    char in[ 100 ], out[ 100 ][ 10 ], splitter[ 100 ] ;
    int num = 0 ;  //เก็บจำนวนคำที่แยกได้
    printf( "Enter text: " ) ;  
    fgets( in, sizeof( in ), stdin ) ;  //รับข้อความ

    printf( "Enter splitter: " ) ;
    fgets( splitter, sizeof( splitter ), stdin ) ;  //รับตัวแบ่ง

    in[ strcspn( in, "\n" ) ] = '\0' ;  //ลบบรรทัดใหม่ \n ที่ได้จาก fgets ให้เป็น \0

    explode( in, splitter, out, &num ) ;  //เรียก explode แยกข้อความ

    for ( int i = 0 ; i < num ; i++ ) {     //แสดงคำที่แยก
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;
    }

    if ( num != 0 ) {     //แสดงจำนวนคำที่แยก
        printf( "count = %d", num ) ;
    } else {
        printf( "count = 0" ) ;
    }//end if

    return 0 ;
    
}//end function main

void explode( char str1[], char splitter[], char str2[][ 10 ], int *count ) {    //แยกข้อความจาก str1 โดย splitter
    char *token = strtok( str1, splitter ) ;       //strtok แยกข้อความทีละคำ
    while( token != NULL ) {       //ทำเมื่อยังมีคำที่แยกได้
        strcpy( str2[ *count ], token ) ;      //คัดลอกคำที่แยกได้ไปเก็บใน str2
        ( *count )++ ;  //เพิ่มจำนวนคำที่แยกได้
        token = strtok( NULL, splitter ) ;      //เริ่มแยกคำถัดไป
        
    }//end while
    
}//end explode

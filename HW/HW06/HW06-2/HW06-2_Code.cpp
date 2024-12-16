/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/

#include <stdio.h>

int main() {
    int input = 0 ;
    int num[] = { 1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1 } ;
    char roman[][ 3 ] = { "M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I" } ;

    printf( "Enter input : " ) ;
    scanf( "%d" , &input ) ;

    printf( "Output: " ) ;
    for ( int i = 0 ; i < 13 ; i++ ) { 
        for ( ; input >= num[ i ] ; input -= num[ i ] ) { 
            printf( "%s", roman[ i ] ) ;
        }//end end ไล่ arrey มาแต่ละตัวและลบด้วยตัวที่เจอ
    }//end for กำหนดเลขที่ใช้จริง

    return 0 ;
  
}//end function main

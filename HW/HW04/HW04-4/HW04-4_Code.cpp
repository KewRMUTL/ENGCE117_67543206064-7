/*
    เขียนโปรแกรมเพื่อคำนวณหาพื้นที่สามเหลี่ยม เมื่อผู้ใช้กรอกค่าได้เพียง 2 ค่าคือ ส่วนสูง และ ฐาน เช่น ส่วนสูง 6 และฐานคือ 2 ดังนั้นพื้นที่สามเหลี่ยมคือ (6x2)/2 = 6
    
    Test case:
        Enter H & W :
            6 2
    Output:
        Triagle Area : 6.0

    Test case:
        Enter H & W :
            3 5
    Output:
        Triagle Area : 7.5
*/

#include <stdio.h>

int main () {
    float w, h = 0 ;
    printf( "Enter w and h : " ) ;
    scanf( "%f %f" , &w , &h ) ;
    printf( "Triagle Area : %.1f" , w * h * 0.5 ) ;
    
    return 0 ;
    
}//end function main

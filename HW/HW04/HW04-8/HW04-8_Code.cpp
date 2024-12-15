/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char input[ 100 ] , output[ 100 ] ;
    int result = 0 , value = 0 , Digit = 0 ;

    printf( "User input : " ) ;
    scanf( "%s" , input ) ;
    int j = strlen( input ) ;

    for ( int i = 0 ; i < j ; i++ ) {
       switch ( input[ j - i - 1 ] ) {
        case '0' : value = 0 ; break ;
        case '1' : value = 1 ; break ;
        case '2' : value = 2 ; break ;
        case '3' : value = 3 ; break ;
        case '4' : value = 4 ; break ;
        case '5' : value = 5 ; break ;
        case '6' : value = 6 ; break ;
        case '7' : value = 7 ; break ;
        case '8' : value = 8 ; break ;
        case '9' : value = 9 ; break ;
        case 'A' : value = 10 ; break ;
        case 'B' : value = 11 ; break ;
        case 'C' : value = 12 ; break ;
        case 'D' : value = 13 ; break ;
        case 'E' : value = 14 ; break ;
        case 'F' : value = 15 ; break ;
        }//end switch กำหนดค่า
        
        result += value * pow( 16 , i ) ; //สำหรับสูตรยกกำลัง
    }//end for แปลงฐาน 10
    
    while ( result > 0 ) {
        output[ Digit ] = result % 2 ;
        result /= 2 ;
        Digit ++ ;
    }//end while แปลงฐาน 2
    
    for ( int i = Digit - 1 ; i >= 0 ; i-- ) {
        printf( "%d" , output[ i ] ) ;  
    }//end for แสดงเลขกลับหลัง

    return 0 ;
    
}//end function main

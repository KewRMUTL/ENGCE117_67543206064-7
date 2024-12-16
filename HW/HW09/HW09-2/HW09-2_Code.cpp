/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/

#include <stdio.h>

int main() {

    int input[ 100 ] , output[ 100 ] , n = 0 , swap = 0 ; 
    do {
        printf( "Input\n" ) ;
        scanf( "%d", &input[ n ] ) ;
        output[ n ] = input[ n ] ;
        n++ ;
    } while ( input[ n-1 ] != -1 ) ;
        n-- ;
      for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = 0 ; j < n - i - 1 ; j++ ) {
            if ( input[ j ] > input[ j + 1 ] ) { 
                swap = input[ j ] ;
                input[ j ] = input[ j + 1 ] ;
                input[ j + 1 ] = swap ; 
            } //end if น้อยไปมาก
            
            if ( output[ j ] < output[ j + 1 ] ) {
                swap = output[ j ] ;
                output[ j ] = output[ j + 1 ] ;
                output[ j + 1 ] = swap ;
            } //end if มากไปน้อย
        }//end if สลับ
    }//end if จำนวนรอบ
    
    printf( "0-99 :  " , n ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", input[ i ] ) ;
    }//end for แสดงจากน้อยไปมาก
    
    printf( "\n" ) ;
    printf( "99-0 :  " , n ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", output[ i ] ) ;
    }//end for แสดงจากมากไปน้อย
    
    return 0 ;
    
}//end function main

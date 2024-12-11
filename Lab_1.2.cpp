/*
โจทย์

จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้

FIX CODE

#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
    int *data, num ;
    GetSet( &data, &num ) ;
    return 0 ;
}//end function
TEST CASE

Input

5
2 4 6 8 10
Output

*/

#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
    int data[ 500 ] , n = 0 ;
    GetSet( data, &n ) ;
    return 0 ;
    
}//end function

void GetSet( int a[] , int *e ) {
    printf( "Enter number: " ) ;
    scanf( "%d" , e ) ;

    printf( "Enter data: " ) ;
    for ( int i = 0 ; i < *e ; i++ ) {
        scanf( "%d" , &a[i] ) ;
    }//end for
    
    for ( int i = 0 ; i < *e ; i++) {
        printf( "%d " , a[ i ] ) ;
    }//end for print a
    
} //end GetSet

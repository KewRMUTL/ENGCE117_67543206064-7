/*
โจทย์

จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้ 

FIX CODE

#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}//end function
TEST CASE

Input

Enter the number of elements: 3
Enter the elements: 10 20 30
Output

Number of elements: 3
10 20 30
*/

#include <stdio.h>

int GetSet( int *arr[] ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address //Pass by value ตัวแปรธรรมดา

int main() {
    int *data[ 100 ], num ;
    num = GetSet( data ) ;
    return 0 ;
}//end function main

int GetSet( int *arr[] ) {
    int n ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d" , &n ) ;
    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        scanf( "%d" , &arr[ i ] ) ;
    }//end for

    printf( "Number of elements: %d\n", n ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d " , arr[ i ] ) ;
    }//end for

    return 0 ;
    
}//end function GetSet

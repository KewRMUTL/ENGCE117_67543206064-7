/*
โจทย์

จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้

FIX CODE

#include <stdio.h>
int *GetSet( int * ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;
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

int *GetSet( int *namae ) ;

int main() {
    int num ;
    GetSet( &num ) ;
    return 0 ;
}//end function

int *GetSet( int *namae ) {
    int elements [100 ] ;

    printf( "Enter the number of elements: ") ;
    scanf( "%d" , namae ) ;
    
    printf( "Enter the elements : " ) ;
    for ( int i = 0 ; i < *namae ; i++ ) {
        scanf( "%d" , &elements[ i ] ) ;
    } //end for รับค่า
    
    printf( "Number of elements : %d\n" , *namae ) ;

    for ( int i = 0 ; i < *namae ; i++ ) {
        printf( "%d " , elements[ i ] ) ;
    }//end for แสดงค่า
    return 0 ;
}//GetSet

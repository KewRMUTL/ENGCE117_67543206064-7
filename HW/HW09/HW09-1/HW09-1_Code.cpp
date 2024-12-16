/*
จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/

#include <stdio.h>

int main() {

    int input[ 100 ], n = 0 ; 
    do {
        printf( "Input[%d]\n", n ) ;
        scanf( "%d" , &input[ n ] ) ;
        n++ ;
    } while ( input[ n-1 ] != -1 ) ;

    printf( "Index = " ) ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        printf( "%2d ", i ) ;
    }//end for ปริ้น Index
    
    printf( "\nArray = " ) ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        printf("%2d ", input[ i ] )  ;
    }//end for ปริ้น Array
    
    return 0 ;
    
}//end function main

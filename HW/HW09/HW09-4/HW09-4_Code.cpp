/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/

#include <stdio.h>

int main() {

    int input[ 100 ], input2[ 100 ], n = 0, count = 0, output[ 100 ], swap = 0 ; 

    printf( "Enter N : \n" ) ;
    scanf( "%d" , &n ) ;


    for ( int i = 0 ; i < n ; i++ ) {
        printf( "Element [%d]\n", i ) ;
        scanf( "%d", &input[ i ] ) ;
    }//end for รับค่า
    
      for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = 0 ; j < n - i - 1 ; j++ ) {
            if ( input[ j ] > input[ j + 1 ] ) { 
                swap = input[ j ] ;
                input[ j ] = input[ j + 1 ] ;
                input[ j + 1 ] = swap ; 
            } //end if น้อยไปมาก
        }//end if สลับ
    }//end if จำนวนรอบ
    
    for ( int i = 0 ; i < n ; i++ ) {
        input2[ i ] = input[ i ] ;
    }//end for cpy input1 ไป input2

    
    printf( "\n" ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        count = 0 ;
        if ( input[ i ] == -1 ) {  // ถ้าค่าถูกนับแล้ว
            continue ;
        } for ( int j = 0 ; j < n ; j++ ) {
            if ( input[ i ] == input2[ j ] ) {
                count ++  ;
                input2[ j ] = -1 ;
            }//end if ถ้าเจอซ้ำ
        }//end for เช็คขวา
        
        output[ i ] = count ;
        
    }//end for เช็คซ้าย
    

    printf( "Output : \n" ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( output[ i ] > 0 ) {     //แสดงผลเฉพาะตัวเลขที่ถูกนับและ count > 0
            if ( output[ i ] > 1 ) {
                printf( "%d -> %d values.\n", input[ i ], output[ i ] ) ;
            } else {
                printf( "%d -> %d value.\n", input[ i ], output[ i ] ) ;
            }//end if
        }//end if
    }//end for

    return 0 ;
    
}//end function main

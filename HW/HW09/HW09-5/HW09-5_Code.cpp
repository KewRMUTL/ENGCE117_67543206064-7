/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*/

#include <stdio.h>

int main() {

    int input[ 100 ], input2[ 100 ], n = 0, count = 0, output[ 100 ], swap = 0 ; 

    printf( "Enter N : \n" ) ;
    scanf( "%d" , &n ) ;

    
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "Input :\n" ) ;
        scanf( "%d" , &input[ i ] ) ;
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
        if ( input[ i ] == -1 ) {     //ถ้าค่าถูกนับแล้ว
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
    printf( "Unique value : " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( output[ i ] == 0 ) {  
            continue ;
        }//end if ถ้าเจอไม่มีข้อมูลให้ข้าม
        
        if ( output[ i ] == 1 ) {
            printf( "%d " , input[ i ] ) ;
        }//end if ปริ้นตัวไม่ซ้ำ
    }//end for แสดงค่า
    
    return 0 ;
    
}//end function main

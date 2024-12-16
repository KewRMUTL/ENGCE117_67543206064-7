/*
    ผู้ใช้กรอกค่า แล้วบันทึกค่าลงไปในอาเรย์(Array1) จากนั้นให้คุณทำการคัดลอกข้อมูลทั้งหมดลงไปในอาเรย์ตัวใหม่(Array2) และให้คุณทำการแสดงข้อมูลในอาเรย์ตัวใหม่ทั้งหมดบนหน้าจอ (เมื่อผู้ใช้กรอก -1 จะถือเป็นการสิ้นสุดการกรอกข้อมูล)
    
    Test case:
        Input value to Array1 [0]: 
            9
        Input value to Array1 [1]: 
            5
        Input value to Array1 [2]: 
            6
        Input value to Array1 [3]: 
            8
        Input value to Array1 [4]: 
            -1
    Output:
        Array1 = 9 5 6 8
        Array2 = 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 9 5 6 8


    Test case:
        Input value to Array1 [0]: 
            7
        Input value to Array1 [1]: 
            -3
        Input value to Array1 [2]: 
            5
        Input value to Array1 [3]: 
            19
        Input value to Array1 [4]: 
            27
        Input value to Array1 [5]: 
            -16
        Input value to Array1 [6]: 
            13
        Input value to Array1 [7]: 
            -7
        Input value to Array1 [8]: 
            -1
    Output:
        Array1 = 7 -3 5 19 27 -16 13 -7
        Array2 = 0 0 0 0 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 7 -3 5 19 27 -16 13 -7

*/

#include <stdio.h>

int main() {

    int input1[ 100 ] , input2[ 100 ] , n = 0 ; 
    do {
        printf( "Input value to Array1 [%d]:\n" , n ) ;
        scanf( "%d" , &input1[ n ] ) ;
        n++ ;
    } while ( input1[ n-1 ] != -1 ) ;
    n-- ;
    
    printf( "Array1 = " ) ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        printf ("%2d " , input1[ i ] ) ;
        input2[ i ] = 0 ;
    }//end for ปริ้น Array

    printf( "\nArray2 = " ) ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        printf( "%2d ", input2[ i ] ) ;
        input2[ i ] = input1[ i ] ;
    }//end for ปริ้น Array2 และ cpy Arry1

    printf( "\n--| Copy Data from Array1 to Array2" ) ;
    printf( "\nArray2 = " ) ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        printf("%2d ", input2[ i ] ) ;
    }//end for ปริ้น Array2

  return 0 ;
  
}//end function main

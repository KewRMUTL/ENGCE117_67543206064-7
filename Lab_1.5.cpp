/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

FIX CODE

#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function

TEST CASE

Input

Enter the number of rows: 2
Enter the number of columns: 3
Enter the matrix elements: 1 2 3 4 5 6
Output

Matrix (2x3):
1 2 3
4 5 6
*/

#include <stdio.h>
#include <stdlib.h>

void GetMatrix( int value[][ 5 ], int *row, int *col ) ;

int main() {
    int data[ 100 ][ 5 ], m, n ;
    GetMatrix( data, &m, &n ) ;
    return 0 ;
    
}//end function main

void GetMatrix(int value[][ 5 ], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;

    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    // ตรวจสอบเงื่อนไขของเมทริกซ์
    if ( *row == 0 && *col == 0 ) {
        printf( "Matrix:\n(empty)\n" ) ;
        return ;
    } else if ( *row == 0 || *col == 0 ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
        return ;
    }//end if

    printf( "Enter the matrix elements: " ) ;
    int total_elements = ( *row ) * ( *col ) ;
    int input_count = 0 ;

    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            if ( scanf( "%d", &value[ i ][ j ] ) == 1 ) {
                input_count++ ;
            } else {
                printf( "Error: Incorrect number of elements.\n" ) ;
                exit( 1 ) ;
            }//end if
        }//end for
    }//end for

    if ( input_count != total_elements ) {
        printf( "Error: Incorrect number of elements.\n" ) ;
        exit( 1 ) ;
    }//end if

    printf( "Matrix (%dx%d):\n", *row, *col ) ;
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            printf( "%d ", value[ i ][ j ] ) ;
        }//end for
        
        printf( "\n" ) ;
    }//end for
}//end for

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

void GetMatrix( int value[][ 5 ], int *row, int *col ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address //Pass by value ตัวแปรธรรมดา

int main() {
    int data[ 100 ][ 5 ], m, n ;
    GetMatrix( data, &m, &n ) ;        // เรียกใช้งานฟังก์ชันเพื่อรับข้อมูลจากผู้ใช้
    return 0 ;
}//end function

void GetMatrix( int value[][ 5 ], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;              // รับค่าจำนวน row

    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;              // รับค่าจำนวน col

    if ( *row == 0 && *col == 0 ) {
        printf( "Matrix is empty.\n" ) ;
        return ;                      // ออกจากฟังก์ชันทันทีถ้าขนาดไม่ถูกต้อง
    } else if ( *row == 0 || *col == 0 ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
        return ;                      // ออกจากฟังก์ชันทันทีถ้าขนาดไม่ถูกต้อง
    }//end if

    printf( "Enter the matrix elements:\n" ) ;
    for ( int i = 0 ; i < *row ; i++ ) {      // รับค่าของเมทริกซ์
        for (int j = 0 ; j < *col ; j++ ) {
            scanf( "%d", &value[ i ][ j ] ) ;  // รับค่าของสมาชิกในเมทริกซ์
        }//end for col
    }//end for row

    printf( "\nMatrix ( %d x %d ):\n", *row, *col ) ;     // แสดงผลเมทริกซ์
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            printf( "%d ", value[ i ][ j ] ) ;  // แสดงค่าของสมาชิก
        }//end for row

        printf( "\n" ) ;

    }//end for col

}//end GetMatrix

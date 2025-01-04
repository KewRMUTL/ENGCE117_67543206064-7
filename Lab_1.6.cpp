/*
โจทย์

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

FIX CODE

#include <stdio.h>
int GetMatrix( int *row, int *col ) ;
int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function

TEST CASE

Input

3 3
1 2 3
4 5 6
7 8 9
Output

Enter number of rows and columns: 3 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9
*/

#include <stdio.h>

int* GetMatrix( int *row, int *col ) ;     //Pass by reference คือ มี &, [], * เปลี่ยน Address //Pass by value ตัวแปรธรรมดา

int main() {
    int m, n ;                                 //ประกาศตัวแปรเก็บจำนวนแถวและคอลัมน์
    int *matrix = GetMatrix( &m, &n ) ;        //เรียกใช้ฟังก์ชัน GetMatrix
    return 0 ;
    
}//end function main

int* GetMatrix( int *row, int *col ) {
    int arr[ 100 ][ 5 ] ;                      //กำหนดขนาดของ array ที่ใช้เก็บข้อมูลเมทริกซ์
    printf( "Enter number of rows and columns: " ) ;
    scanf( "%d %d", row, col ) ;               //รับจำนวนแถวและคอลัมน์จากผู้ใช้

    if (*row == 0 || *col == 0) {              //ตรวจสอบกรณีแถวหรือคอลัมน์เป็น 0
        printf( "Error: Invalid matrix input\n" ) ;
        return NULL ;
    }//end if

    printf( "\nEnter matrix elements:\n" ) ;
    
    for ( int i = 0 ; i < *row ; i++ ) {                      //รับค่าข้อมูลเมทริกซ์จากผู้ใช้
        for ( int j = 0 ; j < *col ; j++ ) {
            if ( scanf( "%d", &arr[ i ][ j ] ) != 1 ) {       //ตรวจสอบว่าค่าถูกต้องหรือไม่
                printf( "Error: Invalid matrix input\n" ) ;
                return NULL ;
            }//end if
        }//end for
    }//end for

    printf( "\nThe entered matrix is:\n" ) ;     //แสดงผลเมทริกซ์
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            printf( "%d ", arr[ i ][ j ] ) ;
        }//end for
        
        printf( "\n" ) ;
    }//end for

    return ( int* )arr ;                      //คืนค่าพอยน์เตอร์ของ array กลับไป
    
}//end GetMatrix

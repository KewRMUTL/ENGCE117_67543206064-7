/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 40320

*/

#include <stdio.h>

int main() {

    int input , n = 0 , sum = 1 ;
    printf( "Enter value :\n" ) ;
    scanf( "%d" , &input ) ;
    
    int cal = input ;
    printf( "Output:\n" ) ;
    printf( "%d! = " , input ) ;
    
    while ( cal != 0 ) {
        printf( "%d",cal ) ;
        if ( cal != 1 ) {
            printf( " x " ) ;
            sum *= cal ;
        }//end if 
        
        cal = cal - 1 ;
        
    }//end while 
    
    printf( "\n%d! = %d" , input , sum ) ;
    
    return 0 ;
    
}//end function main

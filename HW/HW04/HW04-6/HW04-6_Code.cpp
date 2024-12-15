/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00
y8uin 
    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/

#include <stdio.h>
#include <string.h>

int main () {    
    int hour = 0 ;
    float Salary_amount = 0 , Salary = 0 ;
    char ID[ 11 ] , Convert[ 100 ] ;
    
    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%s" , ID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d" , &hour) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%f" , &Salary_amount ) ;

    printf( "Expected Output:\n" ) ;
    printf( "Employees ID = " ) ;
    for ( int i = 0 ; i < 10 ; i++ ) {
        printf( "%c" , ID[ i ]) ;
    }//end for print id

    printf( "\n" ) ;

    Salary = Salary_amount * hour ;                 //คำนวณ
    sprintf( Convert , "%.2f" , Salary ) ;          //แปลงเป็น string
    int length = strlen( Convert ) ;                //วัดความยาว
 
    printf( "Salary = U$ " ) ;  
    for (int i = 0 ; i < length - 3 ; i++ ) {       //กำหนดว่าจะพิมพ์กี่ตัว
        if (i != 0 && ( length - i ) % 3 == 0 ) {   //กำหนดว่าถ้าครบ 3 ตัวให้พิม comma(,)
            printf( "," ) ;
        }//end if
      
        printf( "%c" , Convert[ i ] ) ; 
    }//end for
  
    printf( "%s\n" , strchr( Convert, '.' ) ) ;     //พิมพ์ข้อความทั้งหมดหลังจากทศนิยม

    return 0 ;
    
}//end function main

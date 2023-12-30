#include <stdio.h>
#include <stdlib.h>
//03-evenOdd
/*
xin người dùng nhập từ bàn phím một số nguyên bất kỳ
kiểm tra xem số đó là số chẳn hay lẻ
in ra màn hình báo cáo
*/
int main()
{
    int number;
    printf("\nPlz, input a number: ");
    scanf("%d",&number);
    //code đến được đây là number đã có giá trị
   /* printf("\nNumber ne %d",number);
    //kiểm tra xem giá trị của number là chẳn hay lẻ
    if(number % 2 ==0){
        printf("\nThe Number %d is even ",number);
    }else{
        printf("\nThe Number %d is odd" ,number);}*/
    //cách 2:
    printf(number % 2 == 0 ? "even":"odd");
    return 0;
}

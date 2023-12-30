#include <stdio.h>
#include <stdlib.h>
//12-checkPrime
/*
nhập vào 1 số nguyên number
kiểm tra xem số đó có phải là số nguyên tố hay không?*/
int main()
{
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    if(number >=2){
        for(int i=2; i <= number-1;i++){
            if(number % i ==0){
                printf("\n%d Khong phai la so nguyen to");
                return 0;
            }
        }
        printf("\n%d la so nguyen to",number);

    }else{
        printf("\n%d khong la so nguyen to",number);
    }
    return 0;
}

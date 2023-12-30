#include <stdio.h>
#include <stdlib.h>
/*
Bài 1: Nhập vào n nguyên dương. Đếm số lượng chữ số của n là số nguyên tố.

Đầu vào: 1222333999888 .Kết quả: 6
*/
int main()
{
    long long n;
    char ch;
    do{
        printf("\nNhap so nguyen duong: ");
        scanf("%lld",&n);
        scanf("%c",&ch);
        fflush(stdin);
        if(n < 1 || ch  != 10){
            printf("\nVui long nhap lai!!");
        }


    }while(n < 1 || ch != 10);
    int number;
    int count;
    while(n != 0){
        int isPrime = 1;
        number= n % 10;
        if(number >= 2){
            for(int i = 2;i <= number -1;i++){
                if(number % i ==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                count++;
            }
        }
        n = n / 10;
    }
    printf("%d",count);
    return 0;
}

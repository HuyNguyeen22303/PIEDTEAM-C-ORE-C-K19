#include <stdio.h>
#include <stdlib.h>
//21-primeProgram
int main()
{
    int number;
    char buffer;
    while(1 == 1){


        //ép nhập số nguyên
        do{
            printf("\nNhap so nguyen: ");
            scanf("%d", &number);
            scanf("%c",&buffer);
            fflush(stdin);
            if(buffer != 10){
                printf("\nKhong biet nhap so nguyen ha");
            }
        }while(buffer != 10 );
        if(number == 0) break; //return cx đc

        //nếu code chạy đc xuống đây thi number đã là số nguyên
        //kiểm tra số nguyên
        //c1: return
        //c2:isPrime
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2 ;i < number-1;i++){
                if(number % i ==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1){
                printf("%d is Prime",number);
            }else{
                printf("%d is not prime",number);
            }
        }else{
            printf("%d is not prime",number);
        }
        //điều kiện thoát


    }



    return 0;
}

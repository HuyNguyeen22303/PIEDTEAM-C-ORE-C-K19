#include <stdio.h>
#include <stdlib.h>
//13-countPrime
/*
Nhập vào start và end
in ra màn hình các số prime trong đoạn
*/
int main()
{
    int start,end;
    printf("\nNhap start di: ",start);
    scanf("%d",&start);
    printf("\nNhap end di: ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start;
        start = end;
        end = start;
    }
    int isPrime =1;
    for(int number = start;number <= end;number++){
        isPrime = 1;//reset niềm tin
        if(number >=2){
            for(int i=2;i <= number-1;i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%5d",number);
            }

        }
    }
    return 0;

}


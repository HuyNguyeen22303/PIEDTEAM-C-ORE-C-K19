#include <stdio.h>
#include <stdlib.h>
//17-sumPrime
int main()
{
    int start, end,sumPrime = 0;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    //giả định start = 1; end = 5
    for(int number = start;number <= end; number++){
        int isPrime = 1;//reset niềm tin
        if(number >= 2){
            for(int i = 2;i <= number-1;i++){
                if(number % i ==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){//nếu sau for niềm tin vẫn còn
                sumPrime+=number;
            }
        }
    }
    printf("\nSumPrime = %d",sumPrime);
    return 0;
}

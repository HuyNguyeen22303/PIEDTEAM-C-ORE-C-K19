#include <stdio.h>
#include <stdlib.h>
//12-checkPrimeV2 - k dùng return
int main()
{
    int number;
    printf("\nNhap number di: ");
    scanf("%d",&number);
    int isPrime =1;//niềm tin
    if(number >= 2){
        for(int i = 2;i <= number-1;i++){
            if(number % i ==0){
                isPrime=0;//mất niềm tin
                break;
            }
        }
        if(isPrime==1){
            printf("\n%d is prime",number);
        }else{
            printf("\n%d is not prime",number);
        }
    }else{
        printf("\n%d is not prime",number);
    }
    return 0;
}

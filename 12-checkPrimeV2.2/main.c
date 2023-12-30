#include <stdio.h>
#include <stdlib.h>
//12-checkPrimeV2 - k dùng return
int main()
{
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    int isPrime = 1;
    if(number >= 2){
        for(int i = 2;i <= number -1;i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d is Prime",number);
        }else{
            printf("%d is not prime",number);
        }
    }else{
        printf("%d is not prime",number);
    }
    return 0;
}

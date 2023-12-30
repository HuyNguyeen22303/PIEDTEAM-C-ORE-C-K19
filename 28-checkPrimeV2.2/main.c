#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV2 : có vào không ra
void checkPrimeV2(int number);
int main()
{
    checkPrimeV2(5);
    return 0;
}
void checkPrimeV2(int number){
    if(number >= 2){
        for(int i = 2;i <= number-1;i++){
            if(number % i ==0){
                printf("\n %d is not prime",number);
                return 0;
            }
        }
        printf("\n%d is prime",number);
    }else{
        printf("\n%d is not prime",number);
    }




}

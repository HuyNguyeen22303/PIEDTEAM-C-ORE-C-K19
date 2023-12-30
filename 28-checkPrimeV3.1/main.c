#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV3
//int f(void) // ko lam ma co an
int checkPrimeV3(void);

int main()
{

    if(checkPrimeV3()){
        printf("\n is Prime");
   }else{
        printf("\n is not prime");
   }

    return 0;
}
int checkPrimeV3(void){
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);

    if(number < 2){
        return 0;

    }else{
         for(int i = 2;i <= number - 1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        return 1;
    }



}





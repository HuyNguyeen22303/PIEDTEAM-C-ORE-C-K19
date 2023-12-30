#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV3
int checkPrimeV3(void);
int main()
{
    int n = checkPrimeV3();

    //output
    if(n){
       printf("\n is Prime");
    }else{
        printf("\nis not prime");
    }

    return 0;

}
int checkPrimeV3(void){
    //input
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    //process
    if(number >= 2){
        for(int i = 2;i <= number -1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }





}

#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV4
//int f(int)
int checkPrimeV4(int number);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    if(checkPrimeV4(n)){
        printf("%d is prime",n);
    }else{
        printf("%d is not prime",n);
    }


    return 0;
}





int checkPrimeV4(int number){
    if(number >= 2){
        for(int i = 2;i <= number - 1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        return 1;
    }
    return 0;


}

#include <stdio.h>
#include <stdlib.h>
//checkPrimeV3
int checkPrimeV3();
int main()
{
    int n = checkPrimeV3();
    if(n){
        printf("\n is Prime");
    }else{
        printf("\n is not prime");
    }
    return 0;
}
int checkPrimeV3(){
    int number;
    printf("\Nhap number: ");
    scanf("%d",&number);
    if(number >= 2){
        for(int i = 2;i <= number - 1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }



}

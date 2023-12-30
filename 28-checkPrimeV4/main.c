#include <stdio.h>
#include <stdlib.h>
//checkPrimeV4
int checkPrimeV4(int number);//khai bao
int main()
{
    //input
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);

    n = checkPrimeV4(n);//goi ham
    //output
    if(n){
        printf("\n is Prime",n);
    }else{
        printf("\n is not prime",n);
    }

    return 0;
}
int checkPrimeV4(int number){
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

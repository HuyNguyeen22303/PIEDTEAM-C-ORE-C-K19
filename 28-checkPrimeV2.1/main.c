#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV2.1
//void f(int n)
void checkPrimeV2(int number);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    checkPrimeV2(n);
    return 0;
}
void checkPrimeV2(int number){

    if(number >= 2){
        for(int i = 2;i <= number -1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        printf("\n%d is prime",number);
    }else{
        return 0;
    }


}




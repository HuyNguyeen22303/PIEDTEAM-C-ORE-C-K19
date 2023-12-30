#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV1.1
//void f(void)
void checkPrimeV1(void);
int main()
{
    checkPrimeV1();
    return 0;
}
void checkPrimeV1(void){
    int number;
    printf("\Nhap number: ");
    scanf("%d",&number);

    if(number >= 2){
        for(int i = 2;i <= number-1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        printf("\n%d is Prime",number);
    }else{
        return 0;
    }





}

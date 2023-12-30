#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV2
void checkPrimeV2(int number);//khai bao
int main()
{
    //input
    int n;
    printf("\Nhap n: ");
    scanf("%d",&n);

    checkPrimeV2(n);//goi ham
    return 0;
}
void checkPrimeV2(int number){//build
    //process
    if(number >= 2){
        for(int i = 2;i <= number - 1;i++){
            if(number % i == 0){
                return 0;
            }
        }
        //output
        printf("\n%d isPrime",number);
    }else{
        return 0;
    }



}

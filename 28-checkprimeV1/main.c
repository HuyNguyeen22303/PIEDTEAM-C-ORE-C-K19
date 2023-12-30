#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV1
void checkPrimeV1(void);//khai bao

int main()
{
    checkPrimeV1();//call
    return 0;
}
void checkPrimeV1(void){//build
    //input
    int number;
    printf("\nNhap so nguyen di: ");
    scanf("%d",&number);
    //process
    if(number >= 2){

        for(int i = 2;i <= number-1;i++){
            if(number % i == 0){
                return 0;
            }

        }
        //output
        printf("\n%d is prime",number);
    }else{
        return 0;
    }



}

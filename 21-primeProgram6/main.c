#include <stdio.h>
#include <stdlib.h>
//21-primeProgram
int main()
{
    while(1 == 1){
        int number;
        char ch;
        do{
            printf("\nNhap number: ");
            scanf("%d",&number);
            scanf("%c",&ch);
            fflush(stdin);

            if(number < 0 || ch != 10){
                printf("\nVui long nhap so nguyen!!!");
            }
        }while(number < 0 || ch != 10);
        if(number == 0) break;
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2;i <= number -1;i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\n%d is prime",number);
            }else{
                printf("\n%d is not prime",number);
            }
        }else{
            printf("\n%d is not prime",number);
        }


    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int number;
     char ch;
     do{
        printf("\nNhap number di:");
        scanf("%d",&number);
        scanf("%c",&ch);
        fflush(stdin);
        if(ch == 10){
            if(number >= 2){
                int isPrime = 1;
                for(int i = 2;i <= number -1 ;i++){
                        if(number % i == 0){
                            isPrime = 0;
                            break;
                        }

                }
                if(isPrime == 1){
                    printf("%d is prime",number);
                }else{
                    printf("%d is not prime",number);
                }
            }else{
                printf("%d is not prime",number);
            }
        }

     }while(number !=0 || ch != 10);


    return 0;
}

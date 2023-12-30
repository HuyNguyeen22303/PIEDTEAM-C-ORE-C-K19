#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\Nhap number di:");
    scanf("%d",&number);

    if(number >= 2){
        for(int i = 2;i <= number - 1;i++){
            if(number % i == 0){
                printf("%d is not prime",number);
                return 0;
            }

        }
        printf("%d is prime",number);
    }else{
        printf("%d is not prime",number);
    }
    return 0;
}

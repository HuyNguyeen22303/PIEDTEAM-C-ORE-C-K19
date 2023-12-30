#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start,end;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum=0;
        for(int number=start ; number <= end ;number++){
            if(number >= 2){
                int isPrime = 1;
                for(int i = 2 ;i <= number -1;i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime==1){
                    sum++;
                }
            }
        }
        printf("%d",sum);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//Huy
//Nhập vào 1 khoảng Start và End, Đếm số lượng số nguyên tố, số chính phương, số chẵn, số lẽ có trong khoảng ( 8p )
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
    int isPrime = 1;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(int number = start;number <= end;number++){
        if(number >= 2){
            isPrime = 1;
            for(int i = 2;i <= number -1;i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                count++;
            }
        }
        if(sqrt(number)==(int)sqrt(number)){
            count1++;
        }
        if(number % 2 ==0){
            count2++;
        }else{
            count3++;
        }
    }
    printf("\nso nguyen to: %d",count);
    printf("\nso chinh phuong: %d",count1);
    printf("\nso chan: %d",count2);
    printf("\nso le: %d",count3);

    return 0;
}

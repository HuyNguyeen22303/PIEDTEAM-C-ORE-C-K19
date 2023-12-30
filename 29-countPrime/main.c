#include <stdio.h>
#include <stdlib.h>
//29-countPrime
//nhập vào start và end
//trong đoạn từ start đến enđ
//số nào là số nguyên tố thì in ra màn hình
//thì đếm thì tính tổng
int countPrime(int number);
int main()
{
    int start,end;
    int sum = 0;
    int count = 0;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int number = start;number <= end;number++){
        if(countPrime(number)){
            printf("%5d",number);
            sum+=number;
            count++;
        }

    }
    printf("\nTong la %d",sum);
    printf("\ncount la %d",count);
    return 0;
}
int countPrime(int number){

        for(int i = 2;i <= number -1 ;i++){
            if(number % i ==0){
                return 0;
            }
        }
        return number >= 2;


}

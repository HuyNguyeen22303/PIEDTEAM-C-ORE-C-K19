#include <stdio.h>
#include <stdlib.h>
/*
Bài 4: số đảo ngược

Đầu vào: 123456. kết quả: 654321
*/
int main()
{
    int n;
    char ch;
    do{
    printf("\nNhap n: ");
    scanf("%d",&n);
    scanf("%c",&ch);
    fflush(stdin);
    }while(n < 1 || ch != 10);
    while(n != 0){
        int sum = 0;
        sum+= n % 10;
        printf("%d",sum);
        n = n / 10;
    }


    return 0;
}

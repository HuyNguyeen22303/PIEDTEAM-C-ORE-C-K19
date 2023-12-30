#include <stdio.h>
#include <stdlib.h>
//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
int main()
{
    int n;
    char ch;
    do{
        printf("\nNhap n: ");
        scanf("%d",&n);
        scanf("%c",&ch);
        fflush(stdin);

        if(n < 1 || ch != 10){
            printf("\nVui long nhap so nguyen duong");
        }
    }while(n < 1 || ch != 10);
    float mau = 0;
    float sum = 0;
    for(int i = 1;i <= n;i++){
        mau+=(float)i;
        sum+=(float)1/mau;
        printf("\n%f",sum);

    }

    return 0;
}

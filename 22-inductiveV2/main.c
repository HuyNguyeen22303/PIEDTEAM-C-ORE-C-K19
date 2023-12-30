#include <stdio.h>
#include <stdlib.h>
//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)

int main()
{
    int n;
    float mau;
    float sum=0;
        printf("\nNhap n di: ");
        scanf("%d",&n);
        if(n >=1){
            for(int i = 1;i <= n;i++){
                mau+=i;
                sum+=(float)1/mau;
            }
        }
        printf("\nTong la: %f",sum);
    return 0;
}

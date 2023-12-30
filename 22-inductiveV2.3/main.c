#include <stdio.h>
#include <stdlib.h>

//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
int main()
{
    int number;
    lap:
    printf("\nNhap number di:");
    scanf("%d",&number);
    float mau = 0;
    float sum = 0;
    if(number >= 1){
        for(int i=1;i <=number;i++){
            mau+=i;
            sum+=1/mau;


        }

    }else{
        printf("%d khong hop le");
        goto lap;
    }
    printf("%f",sum);
    return 0;
}

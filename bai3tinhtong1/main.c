#include <stdio.h>
#include <stdlib.h>
//Bài 3: Tính tổng dãy số sau
/*
Đầu vào: n = 1. Kết quả i: Tổng của dãy là -0.666667

Đầu vào: n = 3
Kết quả: Tổng của dãy là -0.723801

Đầu vào: n = 4
Kết quả: Tổng của dãy là 0.165079
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
        if(n < 1 || ch != 10){
            printf("\nVui long Nhap so nguyen");
        }

    }while(n < 1 || ch != 10);
    float sum=0;
    for(int i = 1;i <= n;i++){
        sum+=(float)pow(-1,i)*((float)(2*i)/(2*i+1));
    }
    printf("%f",sum);
    return 0;
}

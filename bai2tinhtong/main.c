#include <stdio.h>
#include <stdlib.h>
/*Bài 2: Nhập vào n nguyên dương, tính và in kết quả của dãy phép tính sau đây.
S=-1 + 2 - 3 + 4 -5 +.....+ (-1)^n * n

Đầu vào: n = 5 . Kết quả: Tổng của dãy là -3
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
    float sum = 0;
    for(int i = 1;i <= n;i++){
        sum+=((float)pow(-1,i)*i);

    }
    printf("%f",sum);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//09-inductiveResult
/*
nhập vào một số nguyên n
xuất ra màn hình kết quả của
1^n + 2^n +3^n +.....n^n

vd:ta nhập n=5
thì phải in ra kết quả của 1^5 + 2^5 + 3^5 + 4^5 + 5^5
*/
int main()
{
    int n,result_of;
    printf("\nNhap n: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        result_of+=pow(i,5);
    }
    printf("%d",result_of);
    return 0;
}

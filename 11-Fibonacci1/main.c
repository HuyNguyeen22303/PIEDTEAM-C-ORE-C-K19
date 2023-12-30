#include <stdio.h>
#include <stdlib.h>
//11-fibonacci
/*
dãy số hoàn hảo
nhập vào 1 số nguyên n
in ra màn hình số ở vị trí thứ n trong dãy fibonacci
*/
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    //set up trang thai n=1
    int prev =0;
    int curr =1;
    int result =1;
    for(int i=1;i <= n-1;i++){
        result=prev +curr;
        prev = curr;
        curr = result;
    }
    printf("\ngia tri o vi tri %d la %d",n,result);
    return 0;
}

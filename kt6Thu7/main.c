#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    int count = 0;
    int dau = 1;
    printf("\nNhap n: ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        if(count == 2){
            dau*=-1;
            count = 0;
        }
        sum+=i*dau;
        count++;
    }
    printf("\nSum = %d",sum);
    return 0;
}

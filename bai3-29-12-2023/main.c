#include <stdio.h>
#include <stdlib.h>
int sumAllElement(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    printf("Tong la %d",sumAllElement(n));
    return 0;
}
int sum(int n){
    int sum = 0;
    while(n!=0){
        sum+=n % 10;
        n /= 10;
    }
    return sum;


}
/*int sumAllElementV2(int n){
    if(n == 0) return 0;
    return n % 10 + sumAllElementV2(n / 10);
}
*/

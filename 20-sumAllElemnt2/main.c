#include <stdio.h>
#include <stdlib.h>
//sumALLElement
/*
nhập vào 1 số nguyên dương n
tính tổng các đơn vị của n
vd: n=1234
=> result = 10
nhập n=3254
=>rusult = 14

hint: hãy dùng / và %
sum += n % 10 => 3254 % 10 = 4
n = n / 10 => 3254 / 10 => 325
sum+=n % 10 => 325 % 10 => 5
n = n / 10 => 325 / 10 => 32
sum+=n % 10 => 32 % 10 => 2
n = n / 10
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

        if(n < 0 || ch != 10){
            printf("\nVui long nhap so nguyen!!!");
        }
    }while(n < 0 || ch != 10);
    int sum = 0;
    while(n != 0){
        sum+=n % 10;
        n = n / 10;
    }
    printf("%d",sum);
    return 0;
}

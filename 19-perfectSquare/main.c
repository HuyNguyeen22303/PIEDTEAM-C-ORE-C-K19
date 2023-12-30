#include <stdio.h>
#include <stdlib.h>
//19-perfectsquare
/*số chính phương: nếu căn 2 của 1 số được số nguyên
thì số đó là số chính phương
nhập vào 1 số nguyên (dương) n
kiểm tra xem n có phải chính phương không ?

n = 7
0^2 1^2 2^2 3^2
n = 9
0^2 1^2 2^2 3^2
n = 5
0^2 1^2 2^2 3^2
*/
int main()
{
    /*
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    int cp;
    for(int i = 0; i <= n; i++)
    {
        cp=pow(i,2);
        if(cp==n)
        {
            printf("\n%d la so chinh phuong",n);
            return 0;
        }
    }

    printf("\n%d khong phai la so chinh phuong",n);
    */
/*
    int n;
    char buffer;
    do
    {
        printf("\nNhap so nguyen duong: ");
        scanf("%d",&n);
        scanf("%c",&buffer);
        fflush(stdin);
        if(buffer !=10 || n < 0)
        {
            printf("\nNhap lai di!!!!!");
        }
    }
    while(buffer !=10 || n < 0);
    for(int i = 0; i <= sqrt(n);i++){
        if(i*i == n){
            printf("\nLa chinh phuong");
            return 0;
        }
    }
    printf("\nKhong phai chinh phuong");
    */
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    if(sqrt(number)==(int)sqrt(number)){
        printf("\nMay la chinh phuong");
    }else{
        printf("\nMay khong phai la chinh phuong");
    }




    return 0;
}

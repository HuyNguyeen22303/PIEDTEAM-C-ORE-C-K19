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
//cach 1:
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
            printf("\nVui long nhap so nguyen!!!!");
        }
    }while(n < 0 || ch != 10);

    for(int i = 0;i <= sqrt(n);i++){
        if(i*i == n){
            printf("\n %d la chinh phuong",n);
        }
    }
    printf("\n %d khong phai la so chinh phuong",n);

    return 0;
}

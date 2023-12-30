#include <stdio.h>
#include <stdlib.h>
//Huy
//-	Nhập vào 1 số nguyên n . In ra màn hình số ở vị trí thứ n trong dãy Fibonanci ( 4p )
int main()
{
    int n;
    char ch;
    int prev = 0;
    int curr = 1;
    int result = 1;
    do{
        printf("\nNhap n: ");
        scanf("%d",&n);
        scanf("%c",&ch);
        fflush(stdin);
        if(n < 1 || ch!= 10){
            printf("\nVui long nhap so nguyen");
        }

    }while(n < 1 || ch != 10);


    for(int i = 1;i <= n-1;i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    printf("\nGia tri o vi tri %d la %d",n,result);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//Huy
//Tính giai thừa n ! = 1*2*3* … *n ( 3p )
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
            printf("\nVui long nhap so nguyen duong!!");
        }
    }while(n < 0 || ch != 10);
    int sum=1;
    for(int i = 1; i<= n;i++){
        sum*=i;
    }

    return 0;
}

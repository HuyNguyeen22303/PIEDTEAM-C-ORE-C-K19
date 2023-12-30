#include <stdio.h>
#include <stdlib.h>
//huy
//	Tìm giá trị của dãy số 1 + 2 – 3 – 4 + 5 + 6 – 7 – 8 +9 + 10 -….. – ( n – 2 ) – ( n – 1 ) + n + ( n + 1 ) ( 4p )
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
            printf("\nVui long nhap so nguyen");
        }

    }while(n < 0 || ch != 10);
    int count = 0;
    int sum = 0;
    for(int i = 1;i <= n;i++){
        if(count==2){
            sum+=i;
            count = 0;

        }else{
            count++;
        }

    }
    printf("\n%d",sum);
    return 0;
}

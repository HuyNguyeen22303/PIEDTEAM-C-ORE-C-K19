#include <stdio.h>
#include <stdlib.h>
//Huy
//-	Nhập vào 1 số nguyên xịn, Kiểm tra số đó có phải là số nguyên tố hay không,
//và in ra tổng và số lượng các số nguyên tố đã đếm được. NHập số 0 thì dừng chương trình (  6p )
int main()
{
    while(1 == 1){
    int n;
    char ch;

    do{
        printf("\nNhap n: ");
        scanf("%d",&n);
        scanf("%c",&ch);
        fflush(stdin);
        if(n < 0 || ch != 10){
            printf("\nVui long nhap so nguyen duong");
        }
    }while(n < 0 || ch !=10);
    int count = 0;
    int sum = 0;

    int isPrime = 1;
    if(n == 0) break;
        if(n >= 2){
            for(int i = 2;i <= n-1;i++){
                if(n % i ==0){
                  isPrime = 0;
                    break;
                }
            }
            if(isPrime ==1){
                printf("\n%d is prime",n);
                sum+=n;
                count++;
                printf("count : %d   sum : %d",sum,count);


            }else{
                printf("\n%d is not prime",n);
            }

        }else{
            printf("\n %d is not prime",n);
        }



    }

    return 0;
}

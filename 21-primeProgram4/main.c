#include <stdio.h>
#include <stdlib.h>
/*
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/
int main()
{
    while (1 == 1){
        int n;
        char ch;
        do{
            printf("\nNhap n: ");
            scanf("%d",&n);
            scanf("%c",&ch);
            fflush(stdin);

            if(n < 0 || ch != 10){
                printf("\nVui long nhap so nguyen !!!!");
            }
        }while(n < 0 || ch != 10);

        if(n == 0) break;
        int isPrime = 1;
        if(n >= 2){
            for(int i = 2;i <= n - 1;i++){
                if(n % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\n%d is prime",n);
            }else{
                printf("\n%d is not prime",n);
            }
        }else{
            printf("\n%d is not prime",n);
        }
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//21-primeProgram
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
    int number;
    char ch;
    do{
        printf("\nNhap number di:",number);
        scanf("%d",&number);
        scanf("%c",&ch);
        fflush(stdin);
        if(ch == 10){
            if(number >= 2){
                int isPrime = 1;
                for(int i = 2;i <= number - 1;i++){
                    if(number % i ==0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime == 1){
                    printf("%d is prime",number);
                }else{
                    printf("%d is not prime",number);
                }
            }else{
                printf("%d is not prime",&number);
            }
        }

    }while(number !=0 || ch !=10);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//12-checkPrime
/*
nhập vào 1 số nguyên number
kiểm tra xem số đó có phải là số nguyên tố hay không?
----------------------
số nguyên tố là gì?
    là số chỉ chia hết cho 1 và chính nó
---------------
    số nguyên tố là số từ 2 trở lên
    nếu mà nunber bé hơn 2 thì không phải là số nguyên tố
    còn nếu từ hai trở lên thì 'có thể' là số nguyên tố
---------------
    số nguyên tố là số k chia hết cho số nào
    từ 2 đến tiệm cận của nó

*/
int main()
{
    int number;
    printf("\nNhap number di :");
    scanf("%d",&number);

    if(number >= 2){
        for(int i = 2;i <= number -1 ;i++){
            if(number % i ==0){
                printf("%d is not prime",number);
                return 0;
            }
        }
        printf("%d is prime",number);

    }else{
        printf("%d is not prime",number);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
21-primeProgram
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
        printf("\nNhap cho toi di: ");
        scanf("%d", &number);
        scanf("%c",&ch);
        fflush(stdin);
        //khi nhập 10a -> vẫn kiểm tra số nguyên tố
        //số nguyên đích thưc: 10 + Enter -> number của mình là 10, buffer là 10
        //kiểm tra số nguyên đích thực -> buffer == 10
        if(ch == 10){
            if(number >= 2){
                int isPrime = 1;
                for(int i = 2;i <= number-1;i++){
                    if(number % i ==0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime ==1){
                    printf("\n%d is Prime",number);
                }else{
                    printf("\n%d is not Prime",number);

                }

            }else{
                printf("\n%d is not prime",number);
            }

        }

    }while(number !=0 || ch != 10);
    //điều kiện thoát number == 0 và buffer !=10
    //điều kiện chạy:
    //while dừng khi điều kiện trong ngoặc là false
    //while chạy tiếp khi điều kiện true
    //number = 10 , 0


    //10 -> 10!=0 -> true ->while chạy tiếp
    //0 -> 0 !=0 ->flase ->while dừng

    return 0;
}

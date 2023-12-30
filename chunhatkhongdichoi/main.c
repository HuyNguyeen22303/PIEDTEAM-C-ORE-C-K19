#include <stdio.h>
#include <stdlib.h>
/*
tìm tổng
1+ 1/2 +1/3+.......1/n
tìm tổng 1+(1+2)/2 +(1+2+3)/3 +(1+2+3+4)/4+....
*/
int main()
{

    /*//1+ 1/2 +1/3 +.......1/n

    // khai báo
    float sum = 0;
    int n;
    printf("\nNhap n: ");
    scanf("\n%d",&n);
    for(int i = 1  ; i <= n ;i++){
        sum=sum+(float)1/i;
    }
    printf("%f", sum);*/


    /*
    int sum = 0;
    float result = 0;
    int n;
    printf("\nNhap n de: ");
    scanf("%d",&n);


    for(int i = 1; i <= n ;i++){
        sum+=i;
        result = result + (float)sum/i;
    }
    printf("\nket qua la: ");
    printf("\n%.2f",result);

    */


   /* //check prime -> phiên bản return
    int number;
    printf("\nNhap number");
    scanf("%d",&number);



    if(number >= 2)
    {
        //chỉ chia hết cho chính nó
        // =>Không chia hết cho số nào từ 2 -> n-1
        for(int i = 2; i <= number-1; i++)
        {
            if(number % i == 0)
            {
                printf("\nKhong phai la so nguyen to");
                return 0;
            }
            printf("\nla so nguyen to");
        }
        else
        {
            printf("\nKhong phai so nguyen to");
        }

    }
    return 0;*/









    //check prime ->phiên bản flag
    int number;
    int isPrime =1;

}


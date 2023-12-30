#include <stdio.h>
#include <stdlib.h>
//06-quadraticEquation
/*
nhập vào 3 số thực đại diện cho a b c
là hệ số của phương trình ax^2 +bx + c =0
tìm nghiệm của phương trình trên
*/
int main()
{
    float a,b,c;
    printf("\nNhap a: ");
    scanf("%f",&a);
    printf("\nNhap b: ");
    scanf("%f",&b);
    printf("\nNhap c: ");
    scanf("%f",&c);

    if(a==0){
        if(b == 0){
            if(c == 0){
               printf("pt vo so nghiem");
            }else{
                printf("pt vo nghiem");
            }
        }else{
            printf("pt co 1 nghiem la %f",-c/b);
        }
    }else{
        float delta=b*b-4*a*c;
        if(delta == 0){
            printf("pt co nghiem kep x1=x2 %f",-b/(2*a));
        }else if(delta > 0){
            printf("pt co 2 nghiem phan biet");
            printf("\nx1= %f",(-b+sqrt(delta))/(2*a));
            printf("\nx2= %f",(-b-sqrt(delta))/(2*a));
        }else{
            printf("pt vo nghiem");
        }

    }
    return 0;
}

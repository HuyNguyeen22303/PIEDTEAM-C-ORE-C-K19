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
    //nhập a b c
    printf("\nnhap a: ");
    scanf("%f",&a);
    printf("\nnhap b: ");
    scanf("%f",&b);
    printf("\nnhap c: ");
    scanf("%f",&c);

    if(a == 0){//bx + c = 0
        if(b == 0){//c = 0
            if(c == 0){
                printf("\nPt vo so nghiem");
            }else{
                printf("\nPt vo nghiem");
            }
        }else{//bx + c = 0 và b != 0
            printf("\nPt co 1 nghiem %f", -c/b);
        }
    }else{//ax^2 +bx + c = 0
        float delta =b*b - 4*a*c;

        if(delta == 0){
            printf("\nPt co nghiem kep x1 = x2 = %f",-b/(2*a));
        }else if(delta > 0){
            printf("phuong trinh co 2 nghiem phan biet");
            printf("\nX1 = %f",(-b + sqrt(delta))/(2*a));
            printf("\nX2 = %f",(-b - sqrt(delta))/(2*a));
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }

    //xét delta:><=0

    return 0;
}
/*if(a!=0){
        delta=b*b-4*a*c;
        if(delta > 0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("\nphuong trinh co 2 nghiem ");
            printf("\nphuong trinh co nghiem x1: %f ",x1);
            printf("\nphuong trinh co nghiem x2: %f ",x2);
        }else if(delta == 0){
            x=-b/2*a;
            printf("\nPhuong trinh co nghiem kep: %f",x);
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }*/

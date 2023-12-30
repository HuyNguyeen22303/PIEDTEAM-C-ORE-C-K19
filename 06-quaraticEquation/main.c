#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("\nNhap a: ");
    scanf("%f",&a);
    printf("\nNhap b: ");
    scanf("%f",&b);
    printf("\nNhap c: ");
    scanf("%f",&c);

    if( a == 0){
        if(b == 0){
            if(c == 0){
                printf("pt vo so nghiem");
            }else{
                printf("pt vo nghiem");
            }
        }else{
            printf("pt co 1 nghiem: %f",-c/b);
        }
    }else{
        float delta = b*b-4*a*c;
        if(delta == 0){
            printf("pt co nghiem kep: %f",-b/(2*a));
        }else if(delta > 0){
            printf("pt co 2 nghiem phan biet");
            printf("x1= %f",(-b + sqrt(delta))*(2*a));
            printf("x2= %f",(-b - sqrt(delta))*(2*a));
        }
    }else{
        printf("pt vo nghiem");
    }

    return 0;
}

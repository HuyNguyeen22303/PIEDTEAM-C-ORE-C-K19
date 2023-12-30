#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nNhap a: ");
    scanf("%d",&a);
    printf("\nNhap b: ");
    scanf("%d",&b);
    printf("\nNhap c: ");
    scanf("%d",&c);

    if(a == 0){
        if(b == 0){
            if(c== 0){
                printf("\nPt vo so nghiem");
            }else{
                printf("\npt vo nghiem");
            }
        }else{
            printf("\nPt co mot nghiem %d",-c/b);
        }
    }else{
        float delta = b*b-4*a*c;
        if(delta == 0){
            printf("pt co nghiem kep: %f",-b*(2*a));
        }else if(delta > 1){
            printf("\npt co 2 nghiem phan biet");
            printf("\nx1= %f",(-b + sqrt(delta))/(2*a));
            printf("\nx2= %f",(-b - sqrt(delta))/(2*a));
        }else{
            printf("pt vo nghiem");
        }
    }
    return 0;
}

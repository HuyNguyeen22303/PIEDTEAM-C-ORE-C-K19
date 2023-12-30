#include <stdio.h>
#include <stdlib.h>
//24-printParttern
/*
nhập vào hight và width
in ra màn hình
vd: hight = 5 và width = 7

*******
*     *
*     *
*     *
*******

*/
int main()
{
    int hight,width;
    printf("\nNhap hight: ");
    scanf("%d",&hight);
    printf("\nNhap width: ");
    scanf("%d",&width);

    for(int h = 1;h <= hight;h++){
        for(int w = 1;w <= width;w++){
            if(h == 1 || h == hight || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
nhập vào 3 số nguyên a b c
kiểm tra a b c có tạo thành tam giác không
nếu có thì là tam giác gì ?
*/
int main()
{
    int a , b, c;
    printf("\nnhap a: ");
    scanf("%d",&a);

    printf("\nnhap b: ");
    scanf("%d",&b);

    printf("\nnhap c: ");
    scanf("%d",&c);

    //nếu code chạy đến đây nghĩa là a b c có giá trị
    //kiểm tra a b c có tạo thành tam giác không
    //là tam giác
    if(a + b > c && a + c > b && b + c > a){
        if(a == b || a == c || b == c){
            if(a == b && b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b){
            printf("\nTam giac vuong");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong la tam giac");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//Huy
//-	Viết chương trình nhập vào 3 cạnh, tìm xem 3 cạnh đó tạo thành tam giác gì ? ( 4p )
int main()
{
    int a,b,c;
    printf("\nnhap a: ");
    scanf("%d",&a);
    printf("\nnhap b: ");
    scanf("%d",&b);
    printf("\nnhap c: ");
    scanf("%d",&c);

    if(a+ b > c || a+c > b || b+c > a){
        if(a == b || b == c || a == c){
            if(a == b && b == c ){
                printf("\ntam giac deu");
            }else if( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\ntam giac vuong can");
            }else{
                printf("\ntam giac can");
            }
        }else if( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\ntam giac vuong ");
        }else{
            printf("\ntam giac thuong");
        }

    }else{
        printf("\nkhong phai la tam giac");
    }
    return 0;
}

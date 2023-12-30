#include <stdio.h>
#include <stdlib.h>
/*
nhập vào 3 số nguyên lần lượt là a, b, c giả sử đó là 3 cạnh ,kiểm tra xem
3 cạnh có tạo thành tam giác không
nếu óc thì là tam giác gì
cân,vuông,đều ,vuông cân,thường
*/
int main()
{
    int a,b,c;
    printf("\nNhap a: ");
    scanf("%d",&a);
    printf("\nNhap b: ");
    scanf("%d",&b);
    printf("\nNhap c: ");
    scanf("%d",&c);

    if(a + b > c || a + c > b || b + c > a){
        if(a == b || a==c || b==c){
            if(a==b && b==c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nTam giac vuong");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong phai la tam giac");
    }

    return 0;
}

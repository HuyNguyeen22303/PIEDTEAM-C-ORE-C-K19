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
    if(a + b > c && b + c > a && a + c >b){
        if(a == b || b == c || c == a){
            if(a == b && b == c){
                printf("\nla tam giac deu");
            }else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
                printf("\nla tam giac vuong can");
            }else{
                printf("\nla tam giac can");
            }

            }else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
                printf("\nla tam giac vuong");
            }else{
                printf("\nla tam giac thuong");

            }
    }else{
        printf("\nKhong phai la tam giac");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//04-compare3Number
/*
nhập từ bàn phím 3 số nguyên lần lược là a,b,c
nhiệm vụ của bạn xuất ra màn hình tên biến có giá trị lớn nhất:

mô tả phần mềm:
nhap a:30
nhap b:20
nhap c:30
a lon nhat (a > b && a > c)
b lon nhat (b > a && b > c)
c lon nhat (c > a && c > b)
a va b lon nhat (a==b && a>c)
a va c lon nhat (a==c && c>b)
b va c lon nhat (b==c && b>a)
a b c bang nhau (a==b && b == c )
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
    if(a > b && a > c){
        printf("\na = %d la so lon nhat",a);
    }else if(b > a && b > c){
        printf("\nb = %d la so lon nhat",b);
    }else if(c > a && c > b){
        printf("\nc = %d la so lon nhat",c);
    }else if(a == b && a>c){
        printf("\na va b = %d la hai so lon nhat",a,b);
    }else if(a == c && c > b){
        printf("\na va c = %d la hai so lon nhat",a,c);
    }else if(b == c && b > a){
        printf("\nb va c = %d la hai so lon nhat",b,c);
    }else{
        printf("\n a b c bang nhau = %d",a,b,c);
    }
    return 0;
}


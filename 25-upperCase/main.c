#include <stdio.h>
#include <stdlib.h>
//25-upperCase
//nhập vào ký tự
//biến thành viết hoa
int main()
{
    char ch;
    printf("\nNhap ky tu: ");
    scanf("%c",&ch);
    fflush(stdin);
    if(ch >= 97 && ch <= 122){
        ch-=32;
    }

    printf("\nCh = %c", ch);
    return 0;
}

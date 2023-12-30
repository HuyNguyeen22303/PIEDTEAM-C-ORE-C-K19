#include <stdio.h>
#include <stdlib.h>
//21-printFormart
/*
ép nhập vòa 1 ký tự thuộc Alphabet thường

in ra ký tự đó dưới dạng ký tự, số , octal


*/
int main()
{
    char ch;
    do{
        printf("\nNhap vao mot ky tu: ");
        scanf("%c",&ch);
        fflush(stdin);

        if(ch < 65 || ch > 97){
            printf("\nVui long nhap mot in hoa!!!!");
        }
    }while(ch < 65 || ch > 97);
    printf("\n%d,%c,%o",ch,ch,ch);
    return 0;
}

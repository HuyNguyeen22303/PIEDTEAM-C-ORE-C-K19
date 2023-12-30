#include <stdio.h>
#include <stdlib.h>
//inputRightFrom
/*
ép người dùng nhập số nguyên đích thực,sai là chữi
ép nhập lại
12 oke
-15 oke
17.6 chữi ,ép nhập lại
12a chữi ép nhập lại
*/
int main(

    int  number;
    char ch;

    do{
        printf("\nNhap so nguyen di: ");
        scanf("%d",&number);
        scanf("%c", &ch);//hứng phần dư
        fflush(stdin);
        if(ch !=10){
            printf("\nDo ku know input integer!!!!!");
        }
    }while(ch != 10);
    return 0;
}

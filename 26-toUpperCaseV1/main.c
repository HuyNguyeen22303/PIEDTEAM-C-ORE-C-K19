#include <stdio.h>
#include <stdlib.h>
//26-toUpercaseV1
void toUpercaseV1(void);//khai bao
int main()
{
    toUpercaseV1();//call


    return 0;
}
void toUpercaseV1(void){//build
    //input
    char ch;
    printf("\nNhap vao 1 ki tu: ");
    scanf("%c",&ch);
    fflush(stdin);
    //process
    if(ch > 97 || ch < 122){
        ch-=32;
    }
    //output
    printf("\n%c",ch);


}

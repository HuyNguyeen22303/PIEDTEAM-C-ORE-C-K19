#include <stdio.h>
#include <stdlib.h>
//26-toUppercaseV4
char toUppercaseV4(char character);
int main()
{
    //input
    char ch;
    printf("\nNhap ky tu: ");
    scanf("%c",&ch);

    ch = toUppercaseV4(ch);//call

    printf("\nKet qua la: %c",ch);
    return 0;
}
char toUppercaseV4(char character){//build
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;

}

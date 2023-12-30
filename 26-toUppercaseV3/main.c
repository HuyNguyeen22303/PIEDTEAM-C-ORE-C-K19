#include <stdio.h>
#include <stdlib.h>
//toUppercaseV3
char toUppercaseV3(void);
int main()
{
    char ch = toUppercaseV3();//call
    printf("\nket qua ne %c",ch);
    return 0;
}
char toUppercaseV3(void){
    //input
    char character;
    printf("\nNhap ky tu: ");
    scanf("%c",&character);
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;


}

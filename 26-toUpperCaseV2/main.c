#include <stdio.h>
#include <stdlib.h>
//26-toUppercaseV2
void toUppercaseV2(char character);
int main()
{
    char ch;
    printf("\nNhap ky tu: ");
    scanf("%c",&ch);
    toUppercaseV2(ch);//call
    return 0;
}
void toUppercaseV2(char character){
    //process
    if(character >= 97 && character <= 122){
        character-=32;
    }
    //output
    printf("\nKy tu = %c",character);

}

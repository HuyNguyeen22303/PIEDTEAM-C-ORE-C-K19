#include <stdio.h>
#include <stdlib.h>
//23-mulEvenOdd
/*nhập vào số nguyên n >=2
tính tích các số chẳn và tích các số lẽ
trong đoạn từ 1 dến n-1

vd: nhập n = 5
tích các số chẳn: 8 => 2*4
tích các lẽ : 3=> 1*3

*/

int main()
{

    int number;
    char buffer;
    int mulEven = 1;
    int mulOdd = 1;
    int hasEven = 0, hasOdd = 0;
    do{
        printf("\nNhap vao so nguyen: ");
        scanf("%d",&number);
        scanf("%c",&buffer);
        fflush(stdin);

    if(buffer != 10 || number < 2){
        printf("\nNhap so nguyen >= 2 ma !!!");
    }
    }while(buffer !=10 || number < 2);
    for(int i = 1;i <= number - 1;i++){
        if(i % 2 == 0){
            mulEven*=i;
            hasEven = 1;
        }else{
            mulOdd*=i;
            hasOdd = 1;
        }
    }
    mulEven*=hasEven;
    mulOdd*=hasOdd;
    printf("\nMulEven = %d",mulEven);
    printf("\nMulOdd = %d",mulOdd);



    return 0;
}

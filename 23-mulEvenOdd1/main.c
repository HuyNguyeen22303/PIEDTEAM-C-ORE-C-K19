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
    int n;
    char ch;
    int mulEven = 1;
    int mulOdd = 1;
    int hasEven = 0;
    int hasOdd = 0;
    do{
        printf("\nNhap so nguyen duong: ");
        scanf("%d",&n);
        scanf("%c",&ch);
        fflush(stdin);
        if(n < 0 || ch != 10){
            printf("\nVui long nhap so nguyen duong!!");
        }
    }while(n < 0 || ch != 10);
    for(int i = 1; i <= n - 1;i++){
        if(i % 2 ==0){
            mulEven*=i;
            hasEven = 1;
        }else{
            mulOdd*=i;
            hasOdd = 1;
        }

    }
    mulEven*=hasEven;
    mulOdd*=hasOdd;
    printf("\nMulEven: %d",mulEven);
    printf("\nMulOdd: %d",mulOdd);


    return 0;
}

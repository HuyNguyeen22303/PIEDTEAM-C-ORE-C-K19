#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV4 ; có vào có ra
int checkPrimeV4 (int number);
int main()
{
    int n;
    printf("\nNhap so di: ");
    scanf("%d",&n);

   if(checkPrimeV4(n)){
        printf("\n%d is prime",n);
   }else{
        printf("\n%d is not prime",n);
   }

    return 0;
}
int checkPrimeV4 (int number){

        for(int i = 2 ;i <= number - 1;i++){
            if(number % i ==0){
                return 0;
            }
        }
        return number >= 2;




}

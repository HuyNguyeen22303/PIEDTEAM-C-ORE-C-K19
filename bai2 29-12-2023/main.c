#include <stdio.h>
#include <stdlib.h>
int kt();
int main()
{
    if(kt()){
        printf("\nso chan");
    }else{
        printf("\nso le");
    }
    return 0;
}
int kt(){
    int n;
    printf("\Nhap n: ");
    scanf("%d",&n);
    /*ga'
    if(n % 2==0){
        return 1;
    }
    else{
        return 0;
    }
    */
    return n % 2 == 0;

}

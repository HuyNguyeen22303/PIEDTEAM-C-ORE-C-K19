#include <stdio.h>
#include <stdlib.h>
int sumAll(int start,int end);
int main()
{
    int start,end;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int tong = sum(start,end);
    printf("\Tong la %d",tong);

    return 0;
}
int sum(int start,int end){
    int sum = 0;
    for(int i = start;i <= end;i++){
            sum+=i;

    }
    return sum;


}

#include <stdio.h>
#include <stdlib.h>
/*
in ra màn hình các số chẳn trong đoạn
tính tổng các sô lẽ trong đoạn
đếm xem có bao nhiêu số trong đoạn
đếm xem có bao nhiêu số chẳn trong đoạn
in ra các sô lẻ trong đoạn
*/
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
    int sum = 0;
    int count1 = 0;
    int count2 = 0;
    printf("\nCac so chan trong doan la");
    for(int i = start;i <= end;i++){
        if(i % 2 == 0){
            printf("%5d",i);
            count2++;
        }else{
            sum+=i;
        }
        count1++;
    }
    printf("\nTong cac so le la %d",sum);
    printf("\nCo %d so trong doan",count1);
    printf("\nCo %d so chan trong doan",count2);
    return 0;
}

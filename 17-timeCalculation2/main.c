#include <stdio.h>
#include <stdlib.h>
//17-timeCalculation
//nhập vào 1 số nguyên tố đại diện cho s
//từ s đó quy ra giờ phút giây
//vd: 4700s
//01:18:20
//phải in theo format
//hint:%02d|sử dụng / %
int main()
{
    int gio,phut,giay,s,time;
    printf("\nNhap so giay: ");
    scanf("%d",&s);

    gio = s / 3600;
    time = s % 3600;
    phut = time / 60;
    giay = time % 60;
    printf("%02d:%02d:%02d",gio,phut,giay);
    return 0;
}

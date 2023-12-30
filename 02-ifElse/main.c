#include <stdio.h>
#include <stdlib.h>
//02 if else
// cấu trúc phân nhánh
int main()
{
    /*
    if(conditional){
        command block;

    }else if(conditional){
        command block;
    }
    */
    int car =5;
    printf("\nSai Gon");
    printf("\nCao toc lien khuong");
    //gặp một biển báo
    if(car >= 7){
        printf("\npren");
    }
    else if(car == 7){
        printf("\nsacom");
    }
    else {
    printf("\nMimosa");
    }
    printf("\nDa Lat");

    //nói riêng về điều kiện
    //comparision operator:toán tử điều kiện
    // == so sánh bằng
    // != khác
    // > < >= <=

    //mathetic operator:toán tử toán hạng
    // + - * / %
    //toán tử tăng
    int a = 5;
    a = a+2;//7
    a += 2;//9
    a = a + 1;//10
    a += 1;//11
    a++;//12
    a += 3;//15
    a -= 1;//14
    a = a - 1;//13
    a--;//12

    //II - Logical operator:toán tử logic
    //muốn đi bar thì cần gì
    //tuổi phải từ 18 trở lên
    //money trên 300
    int age = 25;
    int money = 11;
    /*
    if(age>=18){
            if(money > 300){
          printf("\nwelcome");
          }else{
          printf("\nCut");
          }
    }else{
    printf("\nCut");
    }
    */

    //logical
    //And && Or ||

    if(age >= 18 && money >300){
        printf("\nWelcome");
    }else{
        printf("\nCut");
    }
    //&&: tìm false ,thấy false chốt false
    //||: tìm true ,thấy true chốt true
    a = 9;
    int b = 0;
    if(a == 10 && b++ >2){
        printf("\nTrue a = %d, b = %d",a , b);
    }else{
        printf("\nFalse a = %d, b = %d",a , b);
    }




    return 0;
}

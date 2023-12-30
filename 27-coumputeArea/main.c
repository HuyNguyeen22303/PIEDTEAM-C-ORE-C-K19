#include <stdio.h>
#include <stdlib.h>
//computeArea
/* viết hàm nhận vào 2 cạnh dài rộng
    tính diện tích của hình chữ nhật
    */
float computeArea(float width, float height);
int main()
{
    float w , h;
    printf("\nNhap w: ");
    scanf("%f",w);
    printf("\nNhap h: ");
    scanf("%f",h);

    float s = computeArea(w , h);//call
    printf("\nDien tich hinh chu nhat %f",s);
    return 0;
}
float computeArea(float width, float height){
    float area = width * height;
    return area;



}

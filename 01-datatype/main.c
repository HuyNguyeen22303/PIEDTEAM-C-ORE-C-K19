#include <stdio.h>
#include <stdlib.h>

/*
cntt: xu ly thong tin bang cong nghe
luu tru->xu ly->bao cao (report)
datatype:kieu du lieu
ky tu char character 1byte 'a','2','diep' ->'p'
so nguyen int integer 4byte 9,1999,17.9 ->17
so thuc float float 4byte 9,1999,,17.9->17.9
so thuc double long float 8byte 9,17.9,213123213123.22
*/
//c la ngon ngu huong thu tuc
//     procedure:tuan tu        sequence:dong chay
//dau nhac he args
int main()
{
    //lu tru
    //luu ky tu dau tien trong ten cua minh
    //1.  xac dinh kieu:char
    //2. xac dinh ten:dat ten cho co y nghia
    //      camemelcase
    //      khong ki tu dac biet (tru $ _)
    //      khong co so o dau
    //      phai la danh tu
    //      = phep gan| assignment


    //tao vi|ly|bien de luu
    char firstCharOfName='h';
    //luu tuoi cua minh
    int age = 18;
    //luu diem toan vua roi:point
    float point = 8.2;
    double score =9.8;
    //xem da luu dc gi
    //printf format:in theo dinh dang,theo chuan
    printf("anh huy dep trai");
    //in ra ky tu dau tien trong ten cua minh
    printf("\nKy tu dau tien la %c",firstCharOfName);
    //in ra tuoi cua ban di:in ra gia tri cua age di
    printf("\ntuoi cua ban la %i",age);
    printf("\ntuoi cua ban la %d",age);
    //in ra diem cua ban:point
    printf("\ndiem cua minh la: %.2f",point);
    //in ra score di
    printf("\ndiem cua ban la: %f",score);
    //in ra dia chi cua bien age di
    printf("\ndia chi cua age ne %u",&age);
    //u: unsigned int

    //ngoai le
    int number ='A';
    char ch=66;
    printf("\nNumber ne %c",number);//65 -'A'
    printf("\nCh ne %c",ch);//66 -'B'
    //null biet kieu nhung ko biet gia tri cu the
    //void ko biet gi het
    //tu duy lap trinh
    //vd: tinh tong|thuong gia tri cua 2 bien so nguyen
    int numb1 =10;
    int numb2 =3;
    float result =(float)numb1/numb2;//ep kieu
    printf("\n%d/%d=%f",numb1,numb2,result);
    //swap:hoan vi
    //hoan vi 2 gia tri trong so nguyen
    int number1=15;
    int sting =10;
    int tmp;
    //c1:
    //tmp=sting;//tmp =10
    //sting=number1;//sting=15
    //number1=tmp;//number1=10
    //c2:
    sting=sting+number1;//sting=10+15=25
    number1=sting-number1;//number1=25-15=10
    sting=sting-number1;//sting=25-10=15

    printf("\nNumber1 =%d,sting =%d",number1,sting);

    return 0;
}
//ruturn 0:tra ra 0 cho nguoi goi
// window nhan dc thi 0 biet chuong trinh dung roi


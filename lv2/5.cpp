//de bai cua bai nay la gi?
//bai 5: nhap vao 4 so thuc a,b,c,d. ti so lon nhat trong 4 so do.

#include<iostream>
using namespace std;

void nhap(float &a, float &b, float &c, float &d); // khai bao ham nha a,b,c,d
float timmax(float a, float b, float c, float d); // khai bao ham timmax
void xuat(float kq);

int main()
{
    float a,b,c,d; // khai bao bien a,b,c,d
    nhap (a,b,c,d); // nhap a,b,c,d tu ban phim
    float kq = timmax(a,b,c,d); // timmax cua a,b,c,d
    xuat(kq); // xuat ket qua
    return 0;
}

void nhap(float &a, float &b, float &c, float &d) // dinh nghia ham nhap a,b,c,d
{
    cin>>a>>b>>c>>d;
}

float timmax(float a, float b, float c, float d) // dinh nghia ham timmax
{
    float max=a; // gan max = a
    if (max<b) // neu max<b thi max=b
    {
        max=b;
    }
    if (max<c) // neu max<c thi max=c
    {
        max=c;
    }
    if (max<d) // neu max<d thi max=d
    {
        max=d;
    }
    return max;
}

void xuat(float kq) // dinh nghia ham xuat kq
{
    cout<<kq;
}
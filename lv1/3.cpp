//de bai cua bai nay la gi?
//nhap vao 2 so thuc a,b. tinh chu vi hinh chu nhat va in ra voi do chinh xax 2 chu so thap phan.

#include<iostream>
using namespace std;

void nhap(float &a, float &b) ; // khai bao ham nhao a,b tu ban phim
float chuvihcn(float a, float b); // khai bao ham tinh chu vi hinh chu nhat
void xuat(float kq); // khai bao ham xuat ket qua

int main()
{
    float a,b; // khai bao bien a,b kieu float
    nhap(a,b); // nhap a,b tu ban phim
    float kq= chuvihcn(a,b); // tinh chu vi hinh chu nhat
    xuat(kq); // xuat ket qua
    return 0;
}

void nhap(float &a, float &b) // dinh nghia ham nhap a,b tu ban phim
{
    cin>>a>>b;
}

float chuvihcn(float a, float b) // dinh nghia ham tinh chu vi hinh chu nhat
{
    float c=(a+b)*2;
}

void xuat(float kq) // dinh nghia ham xuat ket qua
{
    cout<<fixed<<setprecision(2)<<fixedkq;
}
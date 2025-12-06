//de bai cua bai nay la gi?
//bai 3: nhap vao 3 so nguyen a,b,c. tim so nho nhat trong 3 so do.

#include<iostream>
using namespace std;


void nhap(int &a, int &b, int c); // khai bao ham nhap a,b,c
int timmin(int a,int b,int c); // khai bao ham timmin
void xuat(int kq); // khai bao ham xuat kq

int main()
{
    int a,b,c; // khai bao bien a,b,c
    nhap(a,b,c); // nhap a,b,c tu ban phim
    int kq = timmin(a,b,c); // timmin cua a,b,c
    xuat(kq); // xuat ket qua
    return 0;
}
void nhap(int &a, int &b, int &c) // dinh nghia ham nhap a,b,c
{
    cin>>a>>b>>c;
}
int timmin(int a, int b, int c) // dinh nghia ham timmin
{
    int min=a; gan min = a
    if (min>b) // neu min>b thi min=b
    {
        min=b;
    }
    if (min>c) // neu min>c thi min=c
    {
        min=c;
    }
    return min;
}
void xuat(int kq)
{
    cout<<kq;
}
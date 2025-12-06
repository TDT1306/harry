//de bai cua bai nay la gi?
//nhap vao 1 so nguyen n. tinh gia tri tuyet doi cua n va in ra.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap n tu ban him
int gttd(int n); // khai bao ham gia tri tuyet doi cua n
void xuat(int kq); // khai bao ham xuat ket qua

int main()
{
    int n;
    nhap(n); // nhap n tu ban phim
    int kq=gttd(); // tinh gia tri tuyet doi cua n
    xuat(kq); // xuat ket qua
    return 0;
}

void xuat(int &n) // dinh nghia ham nhap n tu ban phim
{
    cin>>n;
}

int gttd(int n) // dinh nghia ham gia tri tuyet doi cua n
{
    if (n<0)
    {
        n=-n;
    }
    return n;
}

void xuat(int kq) // dinh nghia ham xuat ket qua
{
    cout<<kq;
}
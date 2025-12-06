//de bai cau bai nay la gi?
//level 3
//bai 1: nhap vao so nguyen duong n. tinh tong S=1+2+3...+n.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int tinhtong(int n); // khai bao ham tinh tong
void xuat(int kq); // khai bao ham xuat ket qua

int main()
{
    int n; // khai bao bien so
    nhap(n); // nhap so tu ban phim
    int kq = tinhtong(n); // tinh tong
    xuat(kq);
    return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
    cin>>n;
}

int tinhtong(int n) // dinh nghia ham tinh tong
{
    int s=0; // khai bao bien tong
    for (int i=1;i<=n;i++) // tinh tong tu 1 den n
    {
        s=(s+i); // cong don
    }
    return s;
}

void xuat(int kq) // dinh nghia ham xuat so
{
    cout<<kq;
}
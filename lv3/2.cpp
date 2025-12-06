// de bai cau bai nay la gi?
// level 3
// bai 2: nhap vo 1 so nguyen duong n. tinh tong s=1^2+2^2+3^2+...+n^2.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int tinhtongbinh(int n); // khai bao ham tinh tong binh phuong
void xuat(int kq);

int main()
{
    int n; // khai bao bien so
    nhap(n); // nhap so tu ban phim
    int kq=tinhtongbinh(n); // tinh tong binh phuong
    xuat(kq); // xuat so
    return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
    cin>>so;
}

int tinhtongbinh(int n) // dinh nghia ham tinh tong binh phuong
{
    int s=0; // khai bao bien tong
    for (int i=1;i<=n;i++) // tinh tong binh phuong tu 1 den n
    {
        s=(s+i*i); // cong don binh phuong
    }
    return s;
}
void xuat(int kq) // dinh nghia ham xuat so
{
    cout<<kq;
}
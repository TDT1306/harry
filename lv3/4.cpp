//de bai cau bai nay la gi?
//level 3
//bai 4: nhap vao so nguyen duong n. tinh tong t=1*2*3*...*n.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int tinhtich(int n); // khai bao ham tinh tich
void xuat(int kq); // khai bao ham xuat so

int main()
{
    int n; // khai bao bien so
    nhap(n); // nhap so tu ban phim
    int kq=tinhtich(n); // tinh tich
    xuat(kq); // xuat so
    return 0;
}

void nhap(int &n); // dinh nghia ham nhap so
{
    cin>>n; 
}
int tinhtich(int n) // dinh nghia ham tinh tich
{
    int n; // khai bao bien tich
    for (int i=1;i<=n;i++) // tinh tich tu 1 den n
    {
        s=(s*i);
    }
    return s;
}

void xuat(int kq) // dinh nghia ham xuat so
{
    cout<<kq;
}
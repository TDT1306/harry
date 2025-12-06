//de bai cua bai nay la gi?
//level 3
//bai 5: nhap vao 1 so nguyen duong n. tinh tong s=1+2+3+...+n.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int tinhtonguoc(int n); // khai bao ham tinh tong uoc
void xuat(int kq); // khai bao ham xuat so

int main()
{
    int n; // khai bao bien so
    nhap(n); // nhap so tu ban phim
    int kq=tinhtonguoc(n); // tinh tong uoc
    xuat(kq); // xuat so
    return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
    cin>>n;
}

int tinhtonguoc(int n) // dinh nghia ham tinh tong uoc
{
    int s=0; // khai bao bien tong
    for(int i=1;i<=n;i++) // tinh tong uoc tu 1 den n
    {
        if (n%i==0) // neu n chia het cho i
        {
            s=s+i;
        }
    }
    return s;
}

void xuat(int kq) // dinh nghia ham xuat so
{
    cout<<kq;
}
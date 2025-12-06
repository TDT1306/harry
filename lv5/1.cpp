//de bai cua bai nay la gi?
//level 5
//Bai 1: Nhap vao 1 so nguyen duong n. liet  ke cac so nguyen to tu 1 den n.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so nguyen n
void xuat(int a); // khai bao ham xuat so nguyen a
void lietkenguyento(int n); // khai bao ham liet ke so nguyen ti
bool nguyento(int n); // khai bao ham kiem tra so nguyen to

int main()
{
    int n; // khai bao bien n
    nhap(n); // nhap so nguyen n
    lietkenguyento(n); // liet ke so nguyen to tu 1 den n
    xuat(n); // xuat so nguyen n
    return 0;
}
void nhap(int &n)
{
    cin>>n;
}
void xuat(int a)
{
    cout<<a<<" ";
}
void lietkesonguyento(int n) // dinh nghia ham liet ke so nguyen to
{
    for (int i=1;i<=n;i++) // duyet tu 1 den n
    {
        if (nguyento(i)) // neu i la so nguyen to thi xuat i
        {
            xuat(i);
        }
    }
}
bool nguyento(int n) // dinh nghia ham kiem tra so nguyen to
{
    int dem=0;
    for(int i=1;i<=n;i++) // dem so uoc cua n
    {
        if(n%i==0) // neu n chia het cho i thi bien dem len 1
        {
            dem++; // dem so uoc cua n
        }
    }
    if (dem==2) // neu n co 2 uoc thi tra ve true
    {
        return true;
    }
    else // nguoc lai tra ve false
    {
        return false;
    }
}
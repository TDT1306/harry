//de bai cua bai nay la gi?
//level 5
//bai 7: nhap vao 1 so nguyen duong n. dem so nguyen to tu 1 den n.

#include <iostream>
using namespace std;

void xuat(int &n); // khai bao ham nhap n
void xuat(int kq); // khai bao ham xuat kq
int demso(int n); // khai bao ham dem so chinh phuong
bool nguyento(int n); // khai bao ham kiem tra so nguyen to

int main()
{
    int n;
    nhap(n); 
    int kq=demso(n); 
    xuat(kq);
    return 0;
}
void nhap(int &n) // dinh nghia ham nhap n
{
    cin>>n;
}
void xuat(int kq) // dinh nghia ham xuat kq
{
    cout<<kq;
}
int demso(int n) // dinh nghia ham dem so chinh phuong
{
    int dem=0;
    for (int i=1;i<=n;i++) // duyet tu 1 den n
    {
        if (nguyento(i) && (n%i==0)) // neu la so nguyen to va chia het cho n
        {
            dem++; // tang dem len 1
        }
    }
    return dem;
}
bool nguyento(int n) // dinh ngia ham kiem tra so nguyen to
{
    int dem=0; // dem so uoc cua n
    for(int i=1;i<=n;i++) // duyet tu 1 den n
    {
        if(n%i==0) // neu n chia het cho i
        {
            dem++; // tang dem len 1
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
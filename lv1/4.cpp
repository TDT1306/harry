//de bai cua bai nay la gi?
//nhap vao 2 so nguyen a,b. tim so lon nhat trong 2 so va in ra man hinh.

#include<iostream>
using namespace std;

void nhap(int &a, int &b); // khai bao ham nhap a,b tu ban him
int kt(int a, int b); // khai bao ham kiem tra max
void xuat(int kq); // khai bao ham xuat ket qua

int main()
{
    int a,b; // khai bao bien a,b
    nhap(a,b); // nhap a,b tu ban phim
    int max = kt(a,b); // gan max = ket qua ham kt
    xuat(max); // xuat ket qua
    return 0;
}

void nhap(int &a, int &b) // dinh nghia ham nhap a,b tu ban phim
{
    cin>>a>>b;
}

int kt(int a, int b) // dinh nghia ham kiem tra max
{
    int max=a;
    if (max<b) // neu max<b thi max=b
    {
        max=b;
    }
    return max;
}

void xuat(int kq) // dinh nghia ham xuat kq
{
    cout<<kq;
}
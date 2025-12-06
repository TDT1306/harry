//de bai cua bai nay la gi?
//nhap vao 1 ky tu. chuyen doi ky tu do thanh ky tu in hoa neu ky tu do la ky tu in thuong va nguoc lai.

#include<iostream>
using namespace std;

void nhap(char &a); // khai bao ham nhap a tu ban phim
char chuyendoi(char b); // khai bao ham chuyen doi chu in hoa thanh chu thuong va nguoc lai
void xuat(char kq); // khai bao ham xuat ket qua

int main()
{
    char aa; // khai bao bien a
    nhap(a); // nha a tu ban phim
    char kq=chuyendoi(a); // gan kq = ket qua ham chuyen doi
    xuat(kq); // xuat ket qua 
    return 0;
}

void nhap(char &a) // dinh nghia ham nhap a tu ban phim
{
    cin>>a;
}

char chuyendoi(char b) // dinh nghia ham chuyen doi chu in hoa thanh chu thuong va nguoc lai
{
    if (b>='a' && b<='z') // neu b la chu thuong
    {
        b=b-32; // chuyen b thanh chu hoa
    }
    else if (b>='A' && b<='Z') // neu b la chu hoa
    {
        b=b+32; // chuyen b thanh chu thuong
    }
    return b;
}

void xuat(char kq) // dinh nghia ham xuat kq
{
    cout<<kq;
}
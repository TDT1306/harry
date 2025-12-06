//de bai cua bai nay la gi?
//bai1: nhap vao 2 so nguyen a,b. tinh thuong a/b. neu b=0 thi khong chia duoc.

#include<iostream>
using namespace std;

void nhap(int &a, int &b); // khai bao ham nhap a,b
int tinhthuong(int a,int b, float &thuong); // khai bao ham tinh thuong
void xuat(int b, float kq); // khai bao ham xuat ket qua

int main()
{
    int a,b; // khai bao bien a,b
    float thuong; // khai bao bien thuong
    nhap (a,b); // nhap a,b tu ban phim
    int co=tinhthuong(a,b,thuong); // tinh thuong a,b
    xuat(co,thuong); // xuat ket qua thuong
    return 0;
}

void nhap(int &a, int &b) // dinh nghia ham nhap a,b
{
    cin>>a>>b;
}

int tinhthuong(int a,int b, float &thuong) // dinh nghia ham tinh thuong
{
    if (b==0) // neu b=0 thi khong chia duoc
    {
        return 0;
    }
    else // nguoc lai thi chia duoc
    {
        thuong = flot (a)/b; // thuong = a/b
        return 1;
    }
}

void xuat(int co, float thuong) // dinh nghia ham xuat ket qua
{
    if (co==0) // neu co=0 thi khong chia duoc
    {
        cout<<"KHONG CHIA DUOC";
    }
    else // nguoc lai thi chia duoc
    {
        cout<<"thuong";
    }
}
//de bai cua bai nay la gi?
//Nhap vao 2 so nguyen a, b. Tinh tong cua 2 so nguyen do va in ra

#include<iostream>
using namespace std;

void nhao(int &a,int &b); // khai bao ham nhap a,b tu ban phim
int tinhtong(int a, int b); //khai bao ham tinh tong
void xuat(int kq); // khai bao ham xuat ket qua

int main()
{
    int a,b;
    nhap(a,b); // nhap a,b tu ban phim
    int kq = tinhtong(a,b); // tinh tong a,b
    xuat(kq); // ket thuc chuong trinh
    return 0;
}
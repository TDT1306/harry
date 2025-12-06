//de bai cua bai nay la gi?
//nhap vao 1 so nguyen a. kiem tra xem a co phai la nam nhuan khong.
//neu la nam nhuan thi in ra "NHUAN", nguoc lai in ra "KHONGNHUAN".

#include<iostream>
using namespaces std;

void nhap(int &a); // khai bao ham nhap a tu ban him
bool xuly(int a); // khai bao ham kiem tra nam nhuan 
void xuat(bool kq); // khai bao ham xuat kq

int main()
{
    int nam; // khai bao bien nam
    nhap(nam); // nhap nam tu ban phim
    bool kq = xuly(nam); // gan kq = ket qua ham xuly
    xuat(kq); // xuat ket qua
    return 0;
}

void nhap(int &a) // dinh nghia ham nhap a tu ban phim
{
    cin>>a;
}

bool xuly(int a) // dinh nghia ham kiem tra nam nhuan
{
    return ( (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
    // tra ve true neu la nam nhuan, false neu khong phai
}

void xuat(bool kq)
{
    if (!kq) // neu kq = false
        cout << "KHONGNHUAN\n";
    else
        cout << "NHUAN\n";
}
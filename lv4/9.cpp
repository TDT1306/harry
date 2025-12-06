//de bai cua bai nay la gi?
//level 4
//nhap vao 1 so nguyen duong n. kiem tra xem cac chu so cua n co phai la so giam dan hay khong?

#include<iostream>
using namespace std;

void nhap(int &n); //khai bao ham nhap
int kiemtra(int n); // khai bao ham kiem tra
void xuat(int kq); // khai bao ham xuat

int main()
{
    int n; // khai bao bien n
    nhap(n); // nhap n
    int kq=kiemtra(n); // gan kq bang ket qua kiem tra
    xuat(kq); // xuat ket qua
    return 0; // ket thuc chuong trinh
}
void nhap(int &n) // dinh nghia ham nhap
{
    cin>>n;
}
int kiemtra(int n) // dinh nghia ham kiem tra
{
    int truoc=0, sau=0; // khai bao bien truoc, sau bang 0 
    while(n!=0) // vong lap while
    {
        sau=n%10; // gan sau bang n chia 10 du 10
        if(sau<truoc) // dieu kien neu sau nho hon truoc
        {
            return false; // tra ve gia tri false
        }
        truoc=sau; // gan truoc bang sau
        n=n%10; // gan n chia 10 du 10
    }

    return true;
}
void zuat(int kq) // dinh nghia ham xuat
{
    if (kq) // dieu kien neu kq dung
    {
        cout<<"CAC CHU SO GIAM DAN";
    }
    else // nguoc lai
    {
        cout<<"CAC CHU SO KHONG GIAM DAN";
    }
}
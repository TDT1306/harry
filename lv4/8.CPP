//DE BAI CUA BAI NAY LA GI?
//Level 4
//Bai 8: Nhap vao 1 so nguyen duong n. Kiem tra xem cac chu so cua n co phai la so tang dan hay khong?

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
int kiemtra(int n); // khai bao ham kiemtra
void xuat(int kq); // khai bao ham xuat

int main()
{
    int n; // khai bao bien n
    nhap(n); // nhap n
    int kq=kiemtra(n); // gan ket qua kiemtra(n) cho kq
    xuat(kq); // xuat kq
    return 0;
}
void nhap(int &n) // dinh nghia ham nhap
{
    cin>>n;
}
int kiemtra(int n) // dinh nghia ham kiemtra
{
    int truoc=10, sau=0;
    while(n!=0) // vong lap while
    {
        sau=n%10; // gan cho sau phan du cua n chia 10
        if(sau>truoc) // diue kien neu sau lon hon truoc
        {
            return false;
        }
        truoc=sau; // gan cho
        n=n/10;
    }
    return true;
}
void xuat(int kq) // dinh nghia ham xuat 
{
    if (kq) // dieu kiem neu kq
    {
        cout<<"CAC CHU SO TANG DAN";
    }
    else // nguoc lai
    {
        cout<<"CAC CHU SO KHONG TANG DAN";
    }
}
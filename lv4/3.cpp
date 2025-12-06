//de bai cua bai nay la gi?
//levl 4
//bai 3: nhap vao 1 so nguyen duong n. kiem tra xem n co phia la so hoan hao hay khong?

#include<iostream>
using namespace std;

void nhap(int n&n); // khai bao ham nhap so nguyen n
void xuat(int kq); // khai bao ham xuat ket qua
bool hoanhao(int n); // khai bao ham kiem tra so hoan hao

int main()
{
    int n; // khai bao bien n
    nhap(n); // nhap n
    bool kq=hoanhao(n); // gan kq bang ket qua kiem tra so hoan hao
    xuat(kq); 
    return 0;
}
void nhap(int &n) // dinh nghia ham nhap so nguyen n
{
    cin>>n;
}
void xuat(int kq) // dinh nghia ham xuat ket qua
{
    if (kq) // neu=true thi in ra la so hoan hao
    {
        cout<<"LA SO HOAN HAO";
    }
    else // nguoc lai in ra khong la so hoan hao
    {
        cout<<"KHONG LA SO HOAN HAO";
    }
}
bool hoanhao(int n) // dinh nghia ham kiem tra so hoan hao
{
    int tong=0; // khai bao bien tong
    for(int n=1;i<=n;i++) // duyet tu 1 den n
        if(n%i==0) // neu n chia het cho i thi cong i vao tong
            tong=tong+i; // cong i vao tong

    if (tong==n) // neu tong=n thi tra ve true
        return true;
    return false;

}
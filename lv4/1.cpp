//de bai cua bai nay la gi?
//level 4
//bai 1: nhap vao 1 so nguyen duong n. kiem tra xem n co phai la so chinh phuong hay khong.

#inlcude<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
bool chinhphuong(int n); // khai bao ham kiem tra so chinh phuong
void xuat(int kq); // khai bao ham xuat

int main()
{
    int n; // khai bao bien n
    nhap(n); // nhap n
    bool kq-cjinhphuong(n); // gan ket qua gang kq kiem tra so chinh phuong
    xuat(kq); // xuat ket qua
    return 0;
}
void xuat(int &n) // dinh nghia ham nhap
{
    cin>>n;
}
bool chinhphuong(int n) // dinh nghia ham kiem tra so chinh phuong
{
    if(n<1) // neu n<1 thi tra ve false
       return false;
    else 
        for(int i=1;i<=n;i++) // duyet tu 1 den can bac hai cua n
            if (i*i==n) // neu i*i bang n thi tra ve true
                return true;
    return false;
}
void xuat(int kq) // dinh nghia ham xuat
{
    if (kq) // neu kq=true thi in ra so chinh phuong
    {
        cout<<"LA SO CHINH PHUONG";
    }
    else // nguoc lai in ra khong la so chinh phuong
    {
        cout<<"KHONG LA SO CHINH OHUONG";
    }
}
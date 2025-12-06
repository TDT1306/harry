//de bai cua bai nay la gi?
//level 6
//viet bang c++
//bai 5: viet chuong trinh nhap vao 1 mang A gom n phan tu. tinh tong cac phan tu cua mang A la so chan va xuat kq ra.

#include<iostream>
using namespace std;

void nhapMang(int &n, int A[]); // nhap mang A gom n phan tu
void xuat(int kq); // xuat kq
int tinhTongChan(int n, int A[]); // tinh tong cac phan tu cua mang A la so chan

int main()
{
    int n,A[100]; // so phan tu cua mang A
    nhapMang(n,A); // nhap mang A gom n phan tu
    int kq=tinhTongChan(n,A); // tinh tong cac phan tu cua mang A la so chan 
    xuat(kq); // xuat kq
    return 0;
}

void nhapMang(int &n, int A[]) // nhap mang A gom n phan tu 
{
    cin>>n; // nhap so phan tu cua mang A
    for(int i=0;i<n;i++) // nhap tung phan tu cua mang A
        cin>>A[i];
}

void xuat(int kq) // xuat kq
{
    cout<<kq;
}

int tinhTongChan(int n, int A[]) // tinh tong cac phan tu cua mang A la so chan
{
    int S=0; // bien S luu tru tong cac phan tu cua mamg A la so chan 
    for(int i=0;i<n;i++) // duyet tung phan tu cua mang A 
        if (A[i]%2==0) // neu phan tu A[i] la so chan thi cong vao S
            S+=A[i]; // neu khong co phan tu no trong mang A la so chan thi S=0
    return 0;
}
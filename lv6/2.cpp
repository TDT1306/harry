//de bai cua bai nay la gi?
//level 6
//viet bang c++
//bai 2: nhap vao 1 mang so thuc gom n phan tu. tinh tong cac phan tu va xuat kq.

#include<iostream>
using namespace std;

void nhapMang(int &n, double A[]); // nhap mang A gom n phan tu
void xuat(double kq); // xuat kq
double tinhTong(int n, double A[]); // tinh tong cac phan tu cua mang

int main()
{
    int n;
    double A[100];
    nhapMang(n,A); // nhap mang A gom n han tu
    double kq=tinhTong(n,A); // tinh tong cac phan tu cua mang
    xuat(kq); 
    return 0;
}

void nhapMang(int &n, double A[]) // nhap mang A gom n phan tu
{
    cin>>n; 
    for(int i=0;i<n;i++) // nhap tung phan tu cua mang
        cin>>A[i];
}

void xuat(double kq) // xuat kq
{
    cout<<kq;
}

double tinhTong(int n, double A[]) // tinh tong cac phan tu cua mang
{
    double S=0.0;
    for(int i=0;i<n;i++) // tinh tong cac phan tu cua mang
        S+=A[i]; // cong tung phan tu vao S
    return S;
}
//de bai cua bai nay la gi?
//level 6
// viet bang c++
//bai 1: nhap vao 1 mang so nguyen gom n phan tu. xuat mang vua nhap.

#include<iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void xuatMang(int n, int A[]);

int main()
{
    int n,A[100];
    nhapMang(n,A); // nhap mang A gom n phan tu
    xuatMang(n,A); // xuat mang A gom n phan tu
    return 0;
}

void nhapMang(int &n, int A[]) // nhap mang A gom n phan tu
{
    cin>>n; // nhap so phan tu cua mang
    for(int i=0;i<n;i++) // nhap tung phan tu cua mang
        cin>>A[i];
}

void xuatMang(int n, int A[]) // xuat mang A gom n phan tu
{
    for(int i=0;i<n;i++) // xuat tung phan tu cua mang
        cout<<A[i]<<" ";
}
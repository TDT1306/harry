//de bai cua bai nay la gi?
//level 6
//viet bang c++
//bai 6: viet chuong trinh nhap vao 1 mang A gom n phan tu. Dem so phan tu cua mang A la so am va xuat kq ra.

#include<iostream>
using namespace std;

void nhapMang(int &n, int A[]); // nhap mang A gom n phan tu
void xuat(int kq); // xuat kq
int demsSoAm(int n, int A[]); // dem so phan tu cua mang A la so am

int main()
{
    int n, A[100]; // so phan tu cua mang A
    nhapMang(n,A); 
    int kq=demsSoAm(n,A); // dem so phan tu cua mang A la so am
    xuat(kq);
    return 0;
}

void nhapMang(int n, int A[]) // nhap mang A gom n phan tu
{
    cin>>n;
    for(int i=0;i<n;i++) // nhap tung phan tu cua mang A
        cin>>A[i];
}

void xuat(int kq) // xuat kq
{
    cout<<kq;
}

int demSoAm(int n, int A[]) // dem so phan tu cua mang A la so am
{
    int dem=0;
    for (int i=0;i<n;i++) // duyet tung phan tu cua mang A
        if (A[i]<0) // neu phan tu A[i] la so am thi cong vao S
           dem++;
    return dem;
}
//de bai cua bai nay la gi?
//levle 6
//viet bang c++
//bai 9: viet chuong trinh nhao vao 1 so nguyen duong n va mang A co n phan tu. TInh tong cac phan tu trong mang A lon hon x.

#include <iostream>
using namespace std;

coid nhapMang(int &n, int A[]); // nhap mang A co n phan tu
void xuat(int &x); // nhap x
void xuat(int kq); // xuat kq
int tinhTong(int n, int A[], int x); // tinh tong cac phan tu trong mang A co n phan tu va lon hon x

int main()
{
    int n, [100],x;
    nhapMang(n,A); // nhap mang A co n phan tu
    nhap(x); 
    int kq=tinhTong(n,A,x); // tinh tong cac phan tu trong mang A co n phan tu va lon hon x
    xuat(kq);
    return 0;
}

void nhap(int &x) // nhap x
{
    cin>>x;
}

void nhapMang(int &n, int A[]) // nhap mang A co n phan tu
{
    cin>>n;
    for(int i=0;i<n;i++) // duyet mang A co n phan tu
        cin>>A[i];
}

void xuat(int kq) // xuat kq
{
    cout<<kq;
}

int tinhTong(int n, int A[], int x) // tinh tong cac phan tu trong mang A co n phan tu va lon hon x
{
    int S=0;
    for (int i=0;i<n;i++) // duyet mang A co n phan tu
        if(A[i]>x) // neu phan tu A[i] lon hon x thi cong vao S
            S+=A[i]; // cong phan tu A[i] vao S
    return S;
}
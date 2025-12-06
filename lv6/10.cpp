//de bai cua bai nay la gi?
//levle 6
//viet bang c++
//bai 10: viet chuong trinh nhap vao 1 so nguyen duong n va mang A co n phan tu. Tinh so phan tu trong mang A bang X.

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // nhap mang A co n phan tu
void nhap(int &x); // nhap x
void xuat(int kq); // xuat kq
int demx(int n, int A[],int x); // dem so phan tu trong mang A co n

int main()
{
    int n, A[100],x; // khai bao n,A,x
    nhapMang(n,A); //nhap mang A co n phan tu
    nhap(x);
    int kq=demx(n,A,x); // dem so phan tu trong mang A co n
    xuat(kq);
    return 0;
}

void nhap(int &x) // nhap x
{
    cin>>x;
} 

coi nhapMang(int &n, int A[]) // nhap mang A co n phan tu
{
    cin>>n;
    for(int i=0;i<n;i++) // duyet mang A co n phan tu
        cin>>A[i];
}

void xuat(int kq) // xuat kq
{
    cout<<kq;
}

int demx(int n, int A[],int x) // dem so phan tu trong mang A co n
{
    int S=0;
    for (int i=0;i<n;i++) // duyet mang A co n phan tu
        if(A[i]==x) // neu phan tu A[i] bang x thi tang dem len 1
            S++; // tang dem len 1
    return S;
}
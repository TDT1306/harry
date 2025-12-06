//de bai cua bai nay la gi?
//level 4
//bai 5: nhap vao 1 so nguyen duong n. tim chu so lon nhat cua n.

#include<iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
int timmax(int n); // khai bao ham tim max
void xuat(int kq); // khai bao ham xuat

int main()
{
    int n; // khai bao bien n
    nhap(n); // nhap n
    int kq=timmax(n); // gan ket qua timmax(n) cho kq
    xuat(kq);
    return 0;
}
nhap(int &n) // dinh nghia ham nhap{
{
    cin>>n; // nhap n
}
int timmax(int n) // dinnh nghia ham timmax
{
    int tam=0, max=0; // khai bao bien tam, max
    while(n!=0) // vong lap while
    {
        tam=n%10; // gan cho tam phan du cua n chia cho 10
        if (max<tam) // dieu kien neu max < tam
        {
            max=tam; // gan max = tam
        }
        n=n/10; // gan cho n bang n chia 10
    }
    return max;
}
void xuat(int kq) // dinh nghia ham xuat kq
{
    cout<<kq;
}
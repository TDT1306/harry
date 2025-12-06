//de bai cua bai nay la gi?
//level 6
//viet bang c++
//bai 3: viet chuong trinh nhap vao vao 1 mang A gom n phan tu. Tinh trung binh cong cac phan tu A va xuat ket qua ra.


#include<iostream>
using namespace std;

void nhapMang(int &n, double A[]); // nhap mang A gom n phan tu
void xuat(double kq); // xuat kq
double tinhTBC(int n, double A[]); // tinh trung binh cong cac phan tu cua mang

int main()
{
    int n; // so phan tu cua mang
    double A[100]; // mang A gom n phan tu
    nhapMang(n,A); // Nhap mang A gom n phan tu
    double kq=tinhTBC(n,A); // tinh trung binh cong cac phan tu cua mang
    xuat(kq); // xuat ket qua
    return 0;
}

void nhapMang(int &n, double A[]) // nhap mang A gom n han tu
{
    cin>>n;
    for(int i=0;i<n;i++) // nhap tung phan tu cua mang
        cin>>A[i];
}

void xuat(double kq) // xuat kq
{
    cout<<kq;
}

double tinhTBC(int n, double A[]) // tinh trung binh cong cac phan tu cau mang
{
    double S=0.0; // bien S luu tru tong cac phan tu cua mang
    int dem=0; // bien dem dem so phan tu cua mang
    for (int i=0;i<n;i++) // duyet tung phan tu cua mang
    {
        S+=A[i]; // cong tung phan tu vao S
        dem++;
    }
    if(dem==0) // neu khong co phan tu nao trong mang thi S=0
        S=0;
    else // neu co phan tu trong mang S=S/dem
        S/=n;
    return S;
}
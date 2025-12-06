// de bai cua bai nay la gi?
//level 6
//viet bang c++
//bai 4: viet chuong trinh nhap vao 1 mang A gom n phan tu. Tinh trung binh cong cac phan tu cua mang A chia het cho 5 va xuat kq ra.

#include<iostream>
using namespace std;

void nhaMang(int &n, int A[]); // nhap mang A gom n phan tu
void xuat(double kq); // xuat kq
double tinhTBC5(int n, int A[]); // tinh trung binh cong cac phan tu cua mang A chia het cho 5

int main()
{
    int n,A[100]; // so phan tu cua mang A
    nhapMang(n,A); // nhap mang A gom n phan tu
    double kq=tinhTBC5(n,A); // tinh trung binh cong cac phan tu cua mang A chia het cho 5
    xuat(kq); // xuat kq
    return 0;
}

void nhapMang(int &n, int A[]) // nhap mang A gom n phan tu
{
    cin>>n; // nhap so phan tu cua mang
    for(int i=0;i<n;i++) // nhap tung phan tu cua mang
        cin>>A[i];
}

void xuat(double kq) // xuat kq
{
    cout<<kq;
}

double tinhTBC5(int n, int A[]) // tinh trung binh cong cac phan tu cua mang A chia het cho 5
{
    int dem=0; // bien dem dem so han tu cua mang A chia het cho 5
    double S=0.0; // bien S luu tru tong cac phan tu cua mang A chia het cho 5
    for (int i=0;i<n;i++) // duyet tung phan tu cua mang A
        if (A[i]%5==0) // neu phan tu A[i] chia het cho 5 thi cong vao S va tang bien dem len 1
        {
            S+=A[i];
            dem++;
        }
    if(dem==0) // neu khong co phan tu nao trong mang A chia het cho 5 thi S=0
        return 0;
    else // neu co phan tu trong mang A chia het chi 5 thi S=S/dem
        S/=dem;
    return S;
}

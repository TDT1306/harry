//de bai cua bai nay la gi?
//nhap vao 3 so thuc a,b,c. kiem tra xem a,b,c co phai 3 canh cua mot tam giac khong?

#include<iostream>
using namespace std;

void nhap(float &a,float &b,float &c); // khai bao ham nhap a,b,c tu ban phim
bool kttratamgiac(float a,float b,float c); // khai bao ham kiem tra tam giac
void xuat(bool kt); // khai bao ham xuat ket qua

int main()
{
    float a,b,c; // khai bao bien a,b,c
    nhap(a,b,c); // nhao a,b,c tu ban phim
    bool kt = kttratamgiac(a,b,c); // gan kt = ket qua ham kttratamgiac
    xuat(kt); // xuat ket qua
    return 0;
}

void nhap(float &a,float &b,float &c) // dinh nghia ham nhap a,b,c tu ban phim
{
    cin>>a>>b>>c;
}

bool kttratamgiac(float a,float b,float c) // dinh nghia ham kiem tra tam giac
{
    if ((a+b)>c && (a+c)>b && (b+c)>a && (a>0) && (b>0) && (c>0)) 
    // neu a,b,c la 3 canh cua tam giac
    {
        return true;
    }
    else // nguoc lai tra ve false
    {
        return false;
    }
}

void xuat(bool kt) // dinh nghia ham xuat ket qua
{
    if (kt==true) // neu kt = true
    {
        cout<<"LA TAM GIAC";
    }
    else if (kt==false) // neu kt = false
    {
        cout<<"KHONG LA TAM GIAC;
    }
}
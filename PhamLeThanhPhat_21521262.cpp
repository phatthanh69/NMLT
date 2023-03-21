
#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    char MASV[8]; // mssv 8 số
    char HT[100];
    char GT; // nam thì nhập m nữ thì nhập n
    double DT, DL, DH, DTB;
};
typedef SinhVien SV;
void tinhDTB(SV &sv)
{
    sv.DTB = (sv.DT + sv.DL + sv.DH) / 3;
}
void Nhap(SV &sv)
{
    cin.getline(sv.MASV, 8);
    cin.getline(sv.HT, 100);
    cin >> sv.GT;
    cin >> sv.DT >> sv.DL >> sv.DH;
    tinhDTB(sv);
}
void Xuat(SV sv)
{
    cout << sv.MASV << "\n"
         << sv.HT << "\n"
         << sv.GT << "\n"
         << sv.DT << "\n"
         << sv.DL << "\n"
         << sv.DH << "\n"
         << "DTB la: " << setprecision(3) << sv.DTB << fixed;
}
int main()
{
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a , b , c , d , e , f , g , A , B , C , D , F , sum , ave ;
    A = 0 ;
    B = 0 ;
    C = 0 ;
    D = 0 ;
    F = 0 ;
    cout << "請輸入國文成績：" ;
    cin >> a ;
    cout << "請輸入英文成績：" ;
    cin >> b ;
    cout << "請輸入數學成績：" ;
    cin >> c ;
    cout << "請輸入歷史成績：" ;
    cin >> d ;
    cout << "請輸入地理成績：" ;
    cin >> e ;
    cout << "請輸入生物成績：" ;
    cin >> f ;
    cout << "請輸入地球科學成績：" ;
    cin >> g ;
    if (a>=90 && a<=100)
    {
        A = A + 1 ;
    }
    else if (a>=80 && a<90)
    {
        B = B + 1 ;
    }
    else if (a>=70 && a<80)
    {
        C = C + 1 ;
    }
    else if (a>=60 && a<70)
    {
        D = D + 1 ;
    }
    else if (a<60)
    {
        F = F + 1 ;
    }
    if (b>=90 && b<=100)
    {
        A = A + 1 ;
    }
    else if (b>=80 && b<90)
    {
        B = B + 1 ;
    }
    else if (b>=70 && b<80)
    {
        C = C + 1 ;
    }
    else if (b>=60 && b<70)
    {
        D = D + 1 ;
    }
    else if (b<60)
    {
        F = F + 1 ;
    }
    if (c>=90 && c<=100)
    {
        A = A + 1 ;
    }
    else if (c>=80 && c<90)
    {
        B = B + 1 ;
    }
    else if (c>=70 && c<80)
    {
        C = C + 1 ;
    }
    else if (c>=60 && c<70)
    {
        D = D + 1 ;
    }
    else if (c<60)
    {
        F = F + 1 ;
    }
    if (d>=90 && d<=100)
    {
        A = A + 1 ;
    }
    else if (d>=80 && d<90)
    {
        B = B + 1 ;
    }
    else if (d>=70 && d<80)
    {
        C = C + 1 ;
    }
    else if (d>=70 && d<60)
    {
        D = D + 1 ;
    }
    else if (d<60)
    {
        F = F + 1 ;
    }
    if (e>=90 && e<=100)
    {
        A = A + 1 ;
    }
    else if (e>=80 && e<90)
    {
        B = B + 1 ;
    }
    else if (e>=70 && e<80)
    {
        C = C + 1 ;
    }
    else if (e>=60 && e<70)
    {
        D = D + 1 ;
    }
    else if (e<60)
    {
        F = F + 1 ;
    }
    if (f>=90 && f<=100)
    {
        A = A + 1 ;
    }
    else if (f>=80 && f<90)
    {
        B = B + 1 ;
    }
    else if (f>=70 && f<80)
    {
        C = C + 1 ;
    }
    else if (f>=60 && f<70)
    {
        D = D + 1 ;
    }
    else if (f<60)
    {
        F = F + 1 ;
    }
    if (g>=90 && g<=100)
    {
        A = A + 1 ;
    }
    else if (g>=80 && g<90)
    {
        B = B + 1 ;
    }
    else if (g>=70 && g<80)
    {
        C = C + 1 ;
    }
    else if (g>=60 && g<70)
    {
        D = D + 1 ;
    }
    else if (g<60)
    {
        F = F + 1 ;
    }
    if (A>0)
    {
        cout << "優：" << A << endl ;
    }
    if (B>0)
    {
        cout << "甲：" << B << endl ;
    }
    if (C>0)
    {
        cout << "乙：" << C << endl ;
    }
    if (D>0)
    {
        cout << "丙：" << D << endl ;
    }
    if (F>0)
    {
        cout << "丁：" << F << endl ;
    }
    sum = a + b + c + d + e + f + g ;
    ave = sum / 7 ;
    cout << "總分為 " << sum << " 平均為 " << ave << "，共有" << F << " 科不及格" << endl ;
    return 0;
}

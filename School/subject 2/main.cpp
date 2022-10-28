#include <iostream>

using namespace std;

int main()
{
    int subject[7] , i , ave , sum , A , B , C , D , F;
    sum = 0 ;
    A = 0 ;
    B = 0 ;
    C = 0 ;
    D = 0 ;
    F = 0 ;
    cout << "請輸入國文成績" ;
    cin >> subject[0] ;
    cout << "請輸入英文成績" ;
    cin >> subject[1] ;
    cout << "請輸入數學成績" ;
    cin >> subject[2] ;
    cout << "請輸入歷史成績" ;
    cin >> subject[3] ;
    cout << "請輸入地理成績" ;
    cin >> subject[4] ;
    cout << "請輸入生物成績" ;
    cin >> subject[5] ;
    cout << "請輸入地球科學成績" ;
    cin >> subject[6] ;
    for (i=0 ; i<7 ; i=i+1)
    {
        if (subject[i]>=90 && subject[i]<=100)
        {
            A = A + 1 ;
        }
        else if (subject[i]>=80 && subject[i]<90)
        {
            B = B + 1 ;
        }
        else if (subject[i]>=70 && subject[i]<80)
        {
            C = C + 1 ;
        }
        else if (subject[i]>=60 && subject[i]<70)
        {
            D = D + 1 ;
        }
        else
        {
            F = F + 1 ;
        }
        sum += subject[i] ;
    }
    ave = sum / 7 ;
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
    cout << "總分為 " << sum << " 平均為 " << ave << "，共有" << F << " 科不及格" << endl ;
    return 0;
}

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
    cout << "�п�J��妨�Z" ;
    cin >> subject[0] ;
    cout << "�п�J�^�妨�Z" ;
    cin >> subject[1] ;
    cout << "�п�J�ƾǦ��Z" ;
    cin >> subject[2] ;
    cout << "�п�J���v���Z" ;
    cin >> subject[3] ;
    cout << "�п�J�a�z���Z" ;
    cin >> subject[4] ;
    cout << "�п�J�ͪ����Z" ;
    cin >> subject[5] ;
    cout << "�п�J�a�y��Ǧ��Z" ;
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
        cout << "�u�G" << A << endl ;
    }
    if (B>0)
    {
        cout << "�ҡG" << B << endl ;
    }
    if (C>0)
    {
        cout << "�A�G" << C << endl ;
    }
    if (D>0)
    {
        cout << "���G" << D << endl ;
    }
    if (F>0)
    {
        cout << "�B�G" << F << endl ;
    }
    cout << "�`���� " << sum << " ������ " << ave << "�A�@��" << F << " �줣�ή�" << endl ;
    return 0;
}

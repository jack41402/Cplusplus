#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[8] = {20, 18, 34, 79, 24, 95, 74, 13} , median ;
    sort (a , a+8) ;
    median = (a[3]+a[4])/2 ;
    cout << "�̤j�� �G " << a[0] << endl ;
    cout << "���p�� �G " << a[6] << endl ;
    cout << "����� �G " << median << endl ;
    if (34!=median)
    {
        cout << "34 is not the median !" << endl ;
    }
    else
    {
        cout << "34 is the median !" << endl ;
    }
    return 0;
}

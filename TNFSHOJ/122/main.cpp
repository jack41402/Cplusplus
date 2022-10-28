#include <iostream>

using namespace std;

int main()
{
    int gamma , X , UV , Visible , IR ;
    long long int N ;
    gamma = 9 ;
    X = 999 ;
    UV = 399999 ;
    Visible = 799999 ;
    IR = 999999999 ;
    cin >> N ;
    if (N<=gamma)
    {
        cout << "Y" << endl ;
    }
    else if (N<=X)
    {
        cout << "X" << endl ;
    }
    else if (N<=UV)
    {
        cout << "UV" << endl ;
    }
    else if (N<=Visible)
    {
        cout << "VIS" << endl ;
    }
    else if (N<=IR)
    {
        cout << "IR" << endl ;
    }
    else
    {
        cout << "R" << endl ;
    }
    return 0;
}

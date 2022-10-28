#include <iostream>

using namespace std;

int main()
{
    int a , b , i , j ;
    cin >> a >> b ;
    i = a ;
    j = b ;
    while (true)
    {
        if (a%b==0 || b%a==0)
        {
            break ;
        }
        else if (a>=b)
        {
            cout << a << "%" << b << "=" << a%b << endl ;
            a = a % b ;
        }
        else if (b>a)
        {
            cout << b << "%" << a << "=" << b%a << endl ;
            b = b % a ;
        }
    }
    if (a>=b)
    {
        cout << a << "%" << b << "=" << a%b << endl ;
        cout << "GCD(" << i << "," << j << ")=" << b << endl ;
    }
    else if (b>a)
    {
        cout << b << "%" << a << "=" << b%a << endl ;
        cout << "GCD(" << i << "," << j << ")=" << a << endl ;
    }
    return 0;
}

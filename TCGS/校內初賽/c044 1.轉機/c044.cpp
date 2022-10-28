#include <iostream>

using namespace std;

int main()
{
    int a1 , a2 , b1 , b2 ;
    cin >> a1 >> a2 >> b1 >> b2 ;
    if (a1+a2<=b1+b2)
    {
        cout << a1 + a2 << endl ;
    }
    else
    {
        cout << b1 + b2 << endl ;
    }
    return 0;
}

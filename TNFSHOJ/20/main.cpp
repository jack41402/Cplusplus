#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a , b , c , d ;
    while (cin >> a >> b >> c >> d)
    {
        a = abs(a - c) ;
        b = abs(b - d) ;
        if (a*b==0)
        {
            c = 1 ;
        }
        else
        {
            c = __gcd(a , b) ;
        }
        cout << a + b + c << "\n" ;
    }
    return 0;
}

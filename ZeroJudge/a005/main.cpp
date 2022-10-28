#include <iostream>

using namespace std;

int main()
{
    int n , a , b , c , d ;
    cin >> n ;
    while (n--)
    {
        cin >> a >> b >> c >> d ;
        cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' ;
        (b-a==d-c) ?  cout << d+d-c << '\n' : cout << d*d/c << '\n' ;
    }

    return 0;
}

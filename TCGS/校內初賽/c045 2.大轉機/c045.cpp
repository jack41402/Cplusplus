#include <iostream>

using namespace std;

int main()
{
    int a1 , a2 , c , b1 , b2 ;
    cin >> a1 >> a2 >> c >> b1 >> b2 ;
    if (a1+a2<=b1+b2 && a1+a2<=a1+c+b2 && a1+a2<=b1+c+a2)
    {
        cout << a1 + a2 << endl ;
    }
    else if (b1+b2<a1+a2 && b1+b2<a1+c+b2 && b1+b2<b1+c+a2)
    {
        cout << b1 + b2 << endl ;
    }
    else if (a1+c+b2<=b1+c+a2 && a1+c+b2<=a1+a2 && a1+c+b2<=b1+b2)
    {
        cout << a1 + c + b2 << endl ;
    }
    else if (b1+c+a2<a1+c+b2 && b1+c+a2<a1+a2 && b1+c+a2<b1+b2)
    {
        cout << b1 + c + a2 << endl ;
    }
    return 0;
}

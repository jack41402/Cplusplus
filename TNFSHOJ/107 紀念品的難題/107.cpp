#include <iostream>

using namespace std;

int main()
{
    int a , b , c , d , i ;
    a = 0 ;
    b = 0 ;
    c = 0 ;
    d = 0 ;
    for (i=1 ; i<=30 ; i=i+1)
    {
        a = a + 1 ;
        b = b + i ;
        d = d + i ;
        c = c + d * i ;
    }
    cout << a + b + c << endl;
    return 0;
}

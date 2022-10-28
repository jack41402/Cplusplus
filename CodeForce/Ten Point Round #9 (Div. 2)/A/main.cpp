#include <iostream>

using namespace std;

int main()
{
    long long int a[3] , b[3] , c[3] ;
    cin >> a[0] >> a[1] >> a[2]
        >> b[0] >> b[1] >> b[2]
        >> c[0] >> c[1] >> c[2] ;
    cout << a[0]*b[1]*c[2] + a[1]*b[2]*c[0] + a[2]*b[0]*c[1] - a[0]*b[2]*c[1] - a[1]*b[0]*c[2] - a[2]*b[1]*c[0] << '\n' ;
    return 0;
}

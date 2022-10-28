#include <iostream>

using namespace std;

int main()
{
    long long int a , b , c , d , e , f , ans ;
    cin >> a >> b >> c >> d >> e >> f ;
    ans = c - (a*e + b*f) ;
    if (ans<0) cout << "-1\n" ;
    else cout << ans/d << '\n' ;
    return 0;
}

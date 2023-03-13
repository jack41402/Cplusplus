#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , c , ans=-1 ;
    cin >> n ;
    for (int a=0 ; a<=n ; ++a)
    {
        for (int b=0 ; b<=n-a ; ++b)
        {
            c = n - a - b ;
            ans = max(ans , 2022 + abs(b - c) + a*b + b*c + c*c - abs(b*b - a*a)) ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}

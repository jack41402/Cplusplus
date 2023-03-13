#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a1 , b1 , c1 , a2 , b2 , c2 , n , ans=-1e9 , y1 , y2 , temp ;
    cin >> a1 >> b1 >> c1 ;
    cin >> a2 >> b2 >> c2 ;
    cin >> n ;
    for (int i=0 ; i<=n ; ++i)
    {
        temp = n-i ;
        y1 = a1 * i * i + b1 * i + c1 ;
        y2 = a2 * temp * temp + b2 * temp + c2 ;
        ans = max(ans , y1+y2) ;
    }
    cout << ans << '\n' ;
    return 0;
}

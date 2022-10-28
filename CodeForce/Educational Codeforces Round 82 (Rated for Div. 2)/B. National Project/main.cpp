#include <iostream>

using namespace std ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int T , n , g , b , i , j , temp , ans , half ;
    cin >> T ;
    for (i=1 ; i<=T ; ++i)
    {
        cin >> n >> g >> b ;
        if (n%2==0)
        {
            half = n/2 ;
        }
        else
        {
            half = (n+1) / 2 ;
        }
        temp = half / g ;
        if (temp==0)
        {
            cout << n << endl ;
        }
        else
        {
            ans = half + (temp-1)*b ;
            cout << ans << endl ;
        }
    }
    return 0;
}

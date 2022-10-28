#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , a=0 , b=0 , ans ;
    cin >> n ;
    ans = n ;
    for (int i=0 ; i<=5 ; ++i)
    {
        for (int j=0 ; j<=5 ; ++j)
        {
            if (ans>(n-500*j-200*i) && n-500*j-200*i>=0)
            {
                ans = n-500*j-200*i ;
                a = j ;
                b = i ;
            }
        }
    }
    cout << a << ' ' << b << ' ' << ans << '\n' ;
    return 0;
}

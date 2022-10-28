#include <iostream>

using namespace std;

long long int a[1000005]={0} , b[1000005]={0} ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , ans=1 , num ;
    num=1e9+9 ;
    cin >> n ;
    cin >> a[0] ;
    for (int i=1 ; i<n ; ++i)
    {
        cin >> a[i] ;
        b[i-1] = a[i] - a[i-1] ;
    }
    for (int i=0 ; i<n-1 ; ++i)
    {
        ans *= b[i] ;
        ans %= num ;
    }
    if (ans >=0) cout << ans << '\n' ;
    else
    {
        ans += num ;
        cout << ans << '\n' ;
    }
    return 0;
}
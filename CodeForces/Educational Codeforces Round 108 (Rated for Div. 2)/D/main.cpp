#include <iostream>
#include <algorithm>

using namespace std;

long long int sum[5005]={0} ;
long long int dp[5005][5005] ;
long long int a[5005] , b[5005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , ans , temp ;
    cin >> n ;
    for (int i=1 ; i<=n ; ++i) cin >> a[i] ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> b[i] ;
        sum[i] = sum[i-1] + a[i] * b[i] ;
    }
    ans = sum[n] ;
    for (int i=1 ; i<=n ; ++i)
    {
        for (int j=i+1 ; j<=n ; ++j)
        {
            temp = 0 ;
            for (int l=i , r=j ; l<=r ; ++l , --r)
            {
                temp += a[l]*b[r] ;
                if (l!=r) temp += a[r]*b[l] ;
            }
            ans = max(ans , sum[n] - (sum[j] - sum[i-1]) + temp) ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}

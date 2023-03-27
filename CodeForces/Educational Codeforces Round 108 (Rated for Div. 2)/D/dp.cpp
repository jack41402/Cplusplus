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
    long long int n , ans , l , r ;
    cin >> n ;
    for (int i=1 ; i<=n ; ++i) cin >> a[i] ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> b[i] ;
        dp[i][i] = a[i]*b[i] ;
        sum[i] = sum[i-1] + a[i] * b[i] ;
    }
    ans = sum[n] ;
    // 轉移式：dp[i][j] = dp[i+1][j-1] + a[i]*b[j] + a[j]*b[i]
    // dp[i][j] 是 i 到 j 間所有的數全部逆轉後的和。
    // 當 j-i = 0 時：區間長度為 1，dp[i][j]就等於當前數的乘積。
    // 當 j-i = 1 時：區間長度為 2 時，dp[i][j] 就等於兩個端點交換後的乘積和。
    // 當 j-i = 2 時：區間長度為 3 時，dp[i][j] = 兩端交換後的兩端端點乘積 + 中間一個數逆轉（即原來的數）後的乘積。
    // 當 j-i = 3 時：區間長度為 4 時，dp[i][j] = 兩端交換後的兩端端點乘積 + 中間兩個數逆轉（之前已經求過）後的乘積。
    // 舉例：1 2 3 4 5 逆轉方式為：1和5逆轉 + [2,4]一整個區間的逆轉。
    for (int i=2 ; i<=n ; ++i)
    {
        for (int j=1 ; j<=n-i+1 ; ++j)
        {
            l = j , r = j + i - 1 ;
            dp[l][r] = dp[l+1][r-1] + a[l]*b[r] + a[r]*b[l] ;
            ans = max(ans , dp[l][r] + sum[n] - (sum[r] - sum[l-1])) ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}

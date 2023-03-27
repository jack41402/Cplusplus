#include <iostream>
#include <algorithm>

using namespace std;

long long int dp[5005][5005] ;
long long int a[5005] , b[5005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , sum=0 , ans=0 , l , r ;
    cin >> n ;
    for (int i=1 ; i<=n ; ++i) cin >> a[i] ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> b[i] ;
        sum += a[i] * b[i] ;
    }
    // 轉移式：dp[i][j] = dp[i+1][j-1] + a[i]*b[j] + a[j]*b[i] - a[i]*b[i] - a[j]*b[j]
    // dp[i][j] 是 i 到 j 間所有的數全部逆轉後的和與原區間的和的差值(增量)。
    // 當 j-i = 0 時：區間長度為 1，dp[i][j]就等於當前數的乘積。
    // 當 j-i = 1 時：區間長度為 2 時，dp[i][j] 就等於兩個端點交換後的乘積和。
    // 當 j-i = 2 時：區間長度為 3 時，dp[i][j] = 兩端交換後的兩端端點乘積 + 中間一個數逆轉（即原來的數）後的乘積。
    // 當 j-i = 3 時：區間長度為 4 時，dp[i][j] = 兩端交換後的兩端端點乘積 + 中間兩個數逆轉（之前已經求過）後的乘積。
    // 舉例：1 2 3 4 5 逆轉方式為：1和5逆轉 + [2,4]一整個區間的逆轉。
    for (int i=1 ; i<=n ; ++i)
    {
        // 區間長度為 1 與 2 的時候
        dp[i][i] = 0 ;
        dp[i][i-1] = 0 ;
    }
    for (int i=n-1 ; i>=1 ; --i)
    {
        for (int j=i+1 ; j<=n ; ++j)
        {
            dp[i][j] = dp[i+1][j-1] + a[i]*b[j] + a[j]*b[i] - a[i]*b[i] - a[j]*b[j] ;
            ans = max(ans , dp[i][j]) ;
        }
    }
    cout << sum + ans << '\n' ;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

long long int arr[4][100005] ;
long long int dp[4][100005] ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n ;
    cin >> n ;
    for (int i=1 ; i<=3 ; ++i)
    {
        for (int j=1 ; j<=n ; ++j)
        {
            cin >> arr[i][j] ;
        }
    }
    dp[1][1] = arr[1][1] ;
    dp[2][1] = arr[2][1] ;
    dp[3][1] = arr[3][1] ;
    for (int i=2 ; i<=n ; ++i)
    {
        dp[1][i] = max(dp[2][i-1] , dp[3][i-1]) + arr[1][i] ;
        dp[2][i] = max(dp[1][i-1] , dp[3][i-1]) + arr[2][i] ;
        dp[3][i] = max(dp[1][i-1] , dp[2][i-1]) + arr[3][i] ;
    }
    cout << max({dp[1][n] , dp[2][n] , dp[3][n]}) << '\n' ;
    return 0;
}

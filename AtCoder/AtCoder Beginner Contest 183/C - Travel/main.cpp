#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long int cost[10][10] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , k , sum , ans=0 ;
    cin >> n >> k ;
    vector<long long int> arr(n+1) ;
    for (int i=1 ; i<=n ; ++i) arr[i-1] = i ;
    arr[n] = 1 ;
    for (int i=1 ; i<=n ; ++i)
    {
        for (int j=1 ; j<=n ; ++j)
        {
            cin>>cost[i][j] ;
        }
    }
    do
    {
        sum = 0 ;
        for (int i=0 ; i<n ; ++i)
        {
            sum += cost[arr[i]][arr[i + 1]] ;
        }
        if (sum==k) ans++ ;
    }
    while (next_permutation(arr.begin()+1 , arr.begin()+n)) ;
    cout << ans << '\n' ;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n , k , temp ;
    cin >> t ;
    while (t--)
    {
        long long int ans=-1e18 ;
        cin >> n >> k ;
        vector<int> arr(n) ;
        for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
        for (long long int i=max(0LL , n-2*k-1) ; i<n ; ++i)
        {
            for (long long int j=i+1 ; j<n ; ++j)
            {
                ans = max(ans , (i+1)*(j+1)-k*(arr[i]|arr[j])) ;
            }
        }
        cout << ans << '\n' ;
    }
    return 0;
}

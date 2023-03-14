#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n , ans ;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        vector<pair<long long int , long long int>> arr(n) ;
        ans = 0 ;
        for (int i=0 ; i<n ; ++i) cin >> arr[i].first , arr[i].second = i + 1 ;
        sort(arr.begin() , arr.end()) ;
        for (int i=0 ; i<n ; ++i)
        {
            for (int j=i+1 ; j<n ; ++j)
            {
                if (arr[i].first*arr[j].first>n+(n-1)) break ;
                if (arr[i].first*arr[j].first==arr[i].second+arr[j].second) ans++ ;
            }
        }
        cout << ans << '\n' ;
    }
    return 0;
}

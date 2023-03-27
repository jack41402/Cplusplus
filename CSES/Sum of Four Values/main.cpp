#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , x , temp ;
    vector<pair<long long int , long long int>> arr ;
    cin >> n >> x ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> temp ;
        arr.emplace_back(temp , i) ;
    }
    sort(arr.begin() , arr.end()) ;
    long long int l , r , left , right , target ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=i+1 ; j<n  ; ++j)
        {
            target = x - arr[i].first - arr[j].first ;
            l = j + 1 , r = n-1 ;
            while (l<r)
            {
                left = arr[l].first ;
                right = arr[r].first ;
                if (i<j && j<l && left+right==target)
                {
                    cout << arr[i].second << ' ' << arr[j].second << ' '
                         << arr[l].second << ' ' << arr[r].second << '\n' ;
                    return 0;
                }
                if (left+right>target) r-- ;
                else l++ ;
            }
        }
    }
    cout << "IMPOSSIBLE\n" ;
    return 0;
}

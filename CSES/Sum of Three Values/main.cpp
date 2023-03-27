#include <iostream>
#include <algorithm>
#include <vector>

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
        l=i+1 , r=n-1 ;
        while (l<r)
        {
            target = x-arr[i].first ;
            left = arr[l].first ;
            right = arr[r].first ;
            if (l!=i && r!=i && left+right==target)
            {
                cout << arr[i].second << ' ' << arr[l].second << ' ' << arr[r].second << '\n' ;
                return 0;
            }
            if (left+right>target) r-- ;
            else l++ ;
        }
    }
    cout << "IMPOSSIBLE\n" ;
    return 0;
}

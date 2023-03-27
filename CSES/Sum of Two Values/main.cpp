#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , x , temp , left , right ;
    cin >> n >> x ;
    vector<pair<int , int>> arr ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        arr.emplace_back(temp , i+1) ;
    }
    sort(arr.begin() , arr.end()) ;
    int l=0 , r=n-1 ;
    while (l<r)
    {
        left = arr[l].first , right = arr[r].first ;
        if (left+right>x) r-- ;
        else if (left+right<x) l++ ;
        else
        {
            cout << arr[l].second << ' ' << arr[r].second << '\n' ;
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n" ;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int a[10] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , temp , ans=1e18 , l , r ;
    for (int &i : a) cin>>i ;
    cin >> n ;
    vector<pair<long long int , long long int>> b ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        // 枚舉在 a 中所有 <=temp 的值
        for (int j : a)
        {
            if (j<=temp) b.emplace_back(temp-j , i) ;
        }
    }
    // index=0 可以視為最小值，index=b.size()-1 可以視為最大值
    sort(b.begin() , b.end()) ;
    l=0 , r=0 ;
    set<long long int> s ;
    vector<long long int> c(n) ;
    c[b[0].second]++ ;
    s.emplace(b[0].second) ;
    while (l<b.size())
    {
        // r<b.size() can be ignored
        while (s.size()<n && r<b.size())
        {
            r++ ;
            if (r==b.size()) break ;
            c[b[r].second]++ ;
            s.emplace(b[r].second) ;
        }
        if (s.size()==n)
        {
            long long int diff=b[r].first - b[l].first ;
            ans = min(ans , diff) ;
            if (c[b[l].second]==1)
            {
                s.erase(b[l].second) ;
            }
            c[b[l].second]-- ;
            l++ ;
        }
        else break ;
    }
    cout << ans << '\n' ;
    return 0;
}

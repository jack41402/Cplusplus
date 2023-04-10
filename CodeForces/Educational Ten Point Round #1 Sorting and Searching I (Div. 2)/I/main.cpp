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
    for (int &i : a) cin >> i ;
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
    // 對延長度進行排序
    sort(b.begin() , b.end()) ;
    l = 0 , r = 0 ;
    // 去掉重複的 index
    set<long long int> s ;
    // 紀錄 index 出現的次數
    vector<long long int> c(n) ;
    c[b[0].second]++ ;
    s.emplace(b[0].second) ;
    while (l<b.size())
    {
        // r<b.size() can be ignored since once r==b.size() the loop will break.
        while (s.size()<n)
        {
            r++ ;
            if (r==b.size()) break ;
            // 紀錄 index 的數量
            c[b[r].second]++ ;
            s.emplace(b[r].second) ;
//            cout << "Emplace " << b[r].first << ' ' << b[r].second << '\n' ;
        }
        if (s.size()==n)
        {
            // 延長度的差值即為兩個指針指向的值相減 r - l
            long long int diff=b[r].first - b[l].first ;
//            cout << "R=" << b[r].first << " L=" << b[l].first << '\n' ;
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
    cout << flush ;
    cout << ans << '\n' ;
    return 0;
}

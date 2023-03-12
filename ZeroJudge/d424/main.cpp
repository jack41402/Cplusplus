#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l , r , h , height ;
    vector<pair<long long int , long long int>> arr , ans ;
    multiset<long long int , greater<>> s ;
    while (cin>>l>>h>>r)
    {
        // 左右界相同不視為建築物
        if (l==r) continue ;
        // 高度為正代表左界，反之則為右界
        arr.emplace_back(l , h) ;
        arr.emplace_back(r , -h) ;
    }
    sort(arr.begin() , arr.end()) ;
    // 建築物輪廓的最後必定為 0
    s.emplace(0) ;
    for (auto i : arr)
    {
        // 更新當前最高的高度
        if (i.second>=0) s.emplace(i.second) ;
        // 遍歷完該建築物後，刪除該建築物的高度
        else s.erase(s.find(-i.second)) ;
        // 符合條件時，向 ans 加入座標以及當前最高的高度
        if (ans.empty() || i.first!=ans.back().first)
        {
            ans.emplace_back(i.first , *s.begin()) ;
        }
        // 如果座標相同時，更新該座標的高度
        else
        {
            ans[ans.size()-1] = {i.first , *s.begin()} ;
        }
    }
    height = 0 ;
    for (auto i : ans)
    {
        if (i.second!=height)
        {
            cout << i.first << ' ' << i.second << ' ' ;
        }
        height = i.second ;
    }
    cout << '\n' ;
    return 0;
}

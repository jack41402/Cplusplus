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
    vector<pair<long long int , long long int>> arr ;
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
    height = 0 ;
    for (auto i : arr)
    {

    }
    return 0;
}

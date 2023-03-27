#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// unordered_map 搜尋效率是 O(1)
unordered_map<long long int , vector<pair<long long int , long long int>>> mp ;
long long int arr[1005]={0} ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , x , sum ;
    cin >> n >> x ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> arr[i] ;
        for (int j=1 ; j<i ; ++j)
        {
            sum = arr[i] + arr[j] ;
            // >=x 必然不符合要求，因為題目要 4 個數字
            if (sum>=x) continue ;
            if (mp.find(x-sum)!=mp.end())
            {
                // 遍歷 mp[x-sum] 對應的位置
                for (auto p : mp[x-sum])
                {
                    if (p.first!=i && p.first!=j && p.second!=i && p.second!=j)
                    {
                        cout << p.first << ' ' << p.second << ' ' << j << ' ' << i << '\n' ;
                        return 0;
                    }
                }
            }
            else mp[sum].emplace_back(j , i) ;
        }
    }
    cout << "IMPOSSIBLE\n" ;
}
#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , print , bind ;
    while (cin>>n)
    {
        priority_queue<pair<int , int>> pq ;
        while (n--)
        {
            cin >> print >> bind ;
            // 先印裝訂時間長的書本，且 priority_queue 是降序排列
            // 所以 pair 的順序是先 bind 後 print
            pq.emplace(bind , print) ;
        }
        long long int count = 0 , ans = 0 ;
        while (!pq.empty())
        {
            // 印刷時間必定是累加的，但裝訂時間不是
            count += pq.top().second ;
            // 比較印刷時間+裝訂時間是否大於 ans
            ans = max (ans , count + pq.top().first) ;
            pq.pop() ;
        }
        cout << ans << '\n' << flush ;
    }
    return 0;
}
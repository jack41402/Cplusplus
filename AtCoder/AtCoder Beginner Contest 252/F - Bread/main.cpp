#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , l , temp , ans=0 , sum=0 , a , b ;
    priority_queue<long long int , vector<long long int> , greater<>> pq ;
    cin >> n >> l ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        pq.emplace(temp) ;
        sum += temp ;
    }
    // 將剩下的麵包也視為有人要的
    if (sum<l) pq.emplace(l-sum) ;
    // 從最小的麵包開始逆著切到最大的麵包為最佳解
    // 切完後合併兩段麵包，再推入 priority queue
    while (pq.size()>=2)
    {
        a = pq.top() ;
        pq.pop() ;
        b = pq.top() ;
        pq.pop() ;
        ans += a+b ;
        pq.emplace(a+b) ;
    }
    cout << ans << '\n' ;
    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , ans , temp , a , b ;
    while (cin>>n , n)
    {
        priority_queue<int , vector<int> , greater<int>> pq ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> temp ;
            pq.emplace(temp) ;
        }
        ans = 0 ;
        for (int i=0 ; i<n-1 ; ++i)
        {
            a = pq.top() , pq.pop() ;
            b = pq.top() , pq.pop() ;
            ans += a + b ;
            pq.emplace(a+b) ;
        }
        cout << ans << '\n' ;
    }
    return 0;
}
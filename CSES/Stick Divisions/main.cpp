#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int x , n , temp , ans=0 ;
    priority_queue<long long int , vector<long long int> , greater<>> pq ;
    cin >> x >> n ;
    while (n--)
    {
        cin >> temp ;
        pq.emplace(temp) ;
    }
    while (pq.size()>=2)
    {
        long long int a=pq.top() ;
        pq.pop() ;
        long long int b=pq.top() ;
        pq.pop() ;
        ans += a + b ;
        pq.emplace(a+b) ;
    }
    cout << ans << '\n' ;
    return 0;
}

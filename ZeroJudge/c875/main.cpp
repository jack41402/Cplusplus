#include <iostream>
#include <queue>

using namespace std;

int tower[1000005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , height , diff , id , h , temp ;
    long long int ans=0 ;
    priority_queue <pair<int , int> , vector<pair<int , int>> , greater<>> pq ;
    cin >> n >> height >> diff ;
    diff -= diff % height ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> tower[i] ;
        pq.emplace(tower[i] , i) ;
    }
    while (!pq.empty())
    {
        auto now=pq.top() ;
        pq.pop() ;
        h = now.first , id = now.second ;
        if (id!=0 && tower[id-1]-h>diff)
        {
            temp = tower[id-1] - h - diff ;
            tower[id-1] -= temp ;
            ans += temp / height ;
            pq.emplace(tower[id-1] , id-1) ;
        }
        if (id!=n-1 && tower[id+1]-h>diff)
        {
            temp = tower[id+1] - h - diff ;
            tower[id+1] -= temp ;
            ans += temp / height ;
            pq.emplace(tower[id+1] , id+1) ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}
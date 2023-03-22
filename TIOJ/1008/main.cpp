#include <iostream>
#include <numeric>
#include <vector>
#include <queue>

using namespace std;

long long int n , m , t , water , ans=1e9  , temp , sum=0 , cnt ;
vector<long long int> pour ;
queue<pair<long long int , long long int>> q ;

void bfs ()
{
    while (!q.empty())
    {
        water = q.front().first ;
        ans = q.front().second ;
        q.pop() ;
        if ((water<<t)&1) break ;
        for (int i=0 ; i<2*n ; ++i)
        {
            if (water+pour[i]<=0 || water+pour[i]>sum) continue ;
            // 倒入水
            if (pour[i]>0 && ((water<<pour[i])&1)==0)
            {
                q.emplace(water|(1<<pour[i]) , ans+1) ;
            }
            // 把水倒掉
            if (pour[i]<0 && (water<<(-pour[i]))&1)
            {
                q.emplace(water&(~(1<<(-pour[i]))) , ans+1) ;
            }
            cnt = 1 , temp = water ;
            // 把水倒入別的杯子
            while (water)
            {
                if (cnt+pour[i]>sum) break ;
                if ((water>>cnt)&1 && cnt+pour[i]>0)
                {
                    // 把水倒掉，將位元轉成 0
                    water &= ~(1<<cnt) ;
                    // 把水倒入別的杯子，將位元轉成 1
                    water |= 1<<(cnt+pour[i]) ;
                    q.emplace(water , ans+1) ;
                    break ;
                }
                cnt++ ;
            }
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool flag=true ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> m ;
        pour.emplace_back(m) ;
        q.emplace(1<<m , 1) ;
        sum += m ;
    }
    cin >> t ;
    temp = pour[0] ;
    for (int i=1 ; i<n ; ++i) temp = gcd(pour[i] , temp) ;
    // 貝祖定理，丟番圖方程式存在解，若且唯若 t 能被量杯水量的公因數整除
    if (t%temp!=0)
    {
        cout << -1 << '\n' ;
        return 0;
    }
    // 量杯的容量小於 t 的時候無解
    for (int i=0 ; i<n ; ++i) if (pour[i]>=t) flag = false ;
    if (flag)
    {
        cout << -1 << '\n' ;
        return 0;
    }
    for (int i=0 ; i<n ; ++i)
    {
        pour.emplace_back(-pour[i]) ;
    }
    bfs() ;
    while (!q.empty())
    {
        cout << q.front().first << ' ' << q.front().second << endl ;
        if (q.front().first==t) ans = min(ans , q.front().second) ;
        q.pop() ;
    }
    cout << ans << '\n' ;
    return 0;
}

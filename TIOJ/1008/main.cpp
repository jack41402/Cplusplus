#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <queue>

using namespace std;

int n , m , t , ans=1e9  , temp ;
vector<int> pour , water ;
queue<pair<vector<int> , int>> q ;

void bfs ()
{
    while (!q.empty())
    {
        water.clear() ;
        for (auto i : q.front().first) water.emplace_back(i) ;
        ans = q.front().second ;
        q.pop() ;
        if (find(water.begin() , water.end() , t)!=water.end()) break ;
        for (int i=0 ; i<n ; ++i)
        {
            // 把燒杯裝滿水
            if (water[i]<pour[i])
            {
                temp = water[i] ;
                water[i] = pour[i] ;
                q.emplace(water , ans+1) ;
                water[i] = temp ;
            }
            // 把水倒掉
            if (water[i]!=0)
            {
                temp = water[i] ;
                water[i] = 0 ;
                q.emplace(water , ans+1) ;
                water[i] = temp ;
                for (int j=0 ; j<n ; ++j)
                {
                    if (j==i) continue ;
                    if (water[j]!=pour[j])
                    {
                        // 要倒入水的燒杯容量比現有的水量大，把水全倒到燒杯
                        if (pour[j] - water[j]>water[i])
                        {
                            temp = water[i] ;
                            water[j] += water[i] ;
                            water[i] = 0 ;
                            q.emplace(water , ans+1) ;
                            water[i] = temp ;
                            water[j] -= water[i] ;
                        }
                        // 要倒入水的燒杯容量比現有的水量小，將燒杯倒滿
                        else
                        {
                            temp = water[j] ;
                            water[i] -=pour[j] - water[j] ;
                            water[j] = pour[j] ;
                            q.emplace(water , ans+1) ;
                            water[j] = temp ;
                            water[i] +=pour[j] - water[j] ;
                        }
                    }
                }
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
    vector<int> arr(n) ;
    q.emplace(arr , 0) ;
    bfs() ;
    while (!q.empty())
    {
        if (find(q.front().first.begin() , q.front().first.end() , t)!=q.front().first.end())
        {
            ans = min(ans , q.front().second) ;
        }
        q.pop() ;
    }
    cout << ans << '\n' ;
    return 0;
}

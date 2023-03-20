#include <iostream>

using namespace std;

bool visited[5000005]={false} ;
int m , d[30] , ans=1e9 ;

void dfs (int now , int index , int station)
{
    if (index==m)
    {
        ans = min(ans , station) ;
        return ;
    }
    if (visited[now+d[index]]==1) dfs(now+d[index] , index+1 , station) ;
    else
    {
        visited[now+d[index]] = true ;
        dfs(now+d[index] , index+1 , station+1) ;
        visited[now+d[index]] = false ;
    }
    if (visited[now-d[index]]==1) dfs(now-d[index] , index+1 , station) ;
    else
    {
        visited[now-d[index]] = true ;
        dfs(now-d[index] , index+1 , station+1) ;
        visited[now-d[index]] = false ;
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m ;
    for (int i=0 ; i<m ; ++i) cin >> d[i] ;
    visited[2500000] = true ;
    dfs(5e6/2 , 0 , 1) ;
    cout << ans << '\n' ;
    return 0;
}

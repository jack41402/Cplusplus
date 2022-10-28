#include <bits/stdc++.h>
#define int long long

using namespace std;

int dsu[200005];

void init(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        dsu[i] = i ;
    }
    return ;
}

int find(int n)
{
    return dsu[n] == n ? n : dsu[n] = find(dsu[n]) ;
}

void merge(int a , int b)
{
    a = find(a) ;
    dsu[a] = find(b) ;
    return ;
}

signed main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n ;
    init(n) ;
    set <int> s ;
    for(int i=1 ; i<=n ; i++)
    {
        int input ;
        cin >> input ;
        s.insert(input) ;
        merge(i,input) ;
    }
    if( s.size()!=n)
    {
        cout << -1 << "\n" ;
    }
    else
    {
        set<int> ans ;
        for(int i=1 ; i<=n ; i++)
        {
            ans.insert(find(i)) ;
        }
        cout << ans.size() << "\n" ;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

long long int num[10005] ;

set<int> s ;
map<long long int , long long int> mp ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , m ;
    cin >> n ;
    while (n--)
    {
        int rk=1 ;
        cin >> m ;
        for (int i=0 ; i<m ; ++i)
        {
            cin >> num[i] ;
            s.insert(num[i]) ;
        }
        for (auto i : s)
        {
            mp[i] = rk ;
            rk++ ;
        }
        for (int i=0 ; i<m ; ++i)
        {
            cout << mp[num[i]] << ' ' ;
        }
        cout << '\n' ;
        s.clear();
        mp.clear();
        memset(num , 0 , m);
    }
    return 0;
}

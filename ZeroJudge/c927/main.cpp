#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

long long int a[1005]={0} , b[1005]={0} , ans=0 , temp=0 ;
gp_hash_table<long long int , int> gp ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int n , p ;
    cin >> n >> p ;
    for (int i=0 ; i<n ; ++i) cin >> a[i] ;
    for (int i=0 ; i<n ; ++i) cin >> b[i] ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=0 ; j<n ; ++j)
        {
            gp[a[i]+b[j]]++ ;
        }
    }
    for (int i=0 ; i<n ; ++i) cin >> a[i] ;
    for (int i=0 ; i<n ; ++i) cin >> b[i] ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=0 ; j<n ; ++j)
        {
            if (gp.find(p-a[i]-b[j])!=gp.end())
            {
                ans += gp[p-a[i]-b[j]] ;
            }
        }
    }
    cout << ans << '\n' ;
    return 0;
}

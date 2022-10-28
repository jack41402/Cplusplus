//https://codeforces.com/contest/1458/problem/A
//A. Row GCD
#include <bits/stdc++.h>

using namespace std;

long long int  a[200005], b[200005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n , m ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> a[i] ;
    }
    long long int g=0 ;
    /*
    最大公因數性質
    結合律：gcd(a , b , c) = gcd(a , gcd(b , c)) = gcd(gcd(a , b) , c)
    輾轉相除法性質：gcd(a , b) = gcd(b , a/b) = gcd(b , |a-b|) = gcd(a , |a-b|)
    */
    for (int i=1 ; i<n ; ++i )
    {
        g = __gcd(g , abs(a[i]-a[i-1])) ;
    }
    /*
      gcd(a1+b1 , a2+b1 , a3+b1 , ...... , an+b1)
    = gcd(a1+b1 , |a1+b1-a2-b1| , |a1+b1-a3-b1| , ...... , |a1+b1-an-b1|) (輾轉相除法性質)
    = gcd(a1+b1 , |a1-a2| , |a1-a3| , ...... , |a1-an|)
    = gcd(a1+b1 , gcd(|a1-a2| , |a1-a3| , ...... , |a1-an|))
    */
    for (int i=0 ; i<m ; ++i)
    {
        cin >> b[i] ;
        long long int ans=__gcd(a[0]+b[i] , g) ;
        cout << ans << " " ;
    }
    cout << '\n' ;
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

void binary_search(int n , int m , int k)
{
    int l=0 , r=k ;
    while (l<r)
    {
        int mid = (l+r)/2 ;
        int u1 = n + mid ;
        int u2 = m + (k - mid) ;
        if (u1>u2) r = mid ;
        else l = mid -1 ;
    }
    cout << k - l + 1 << '\n' ;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double q , n , m , k ;
    cin >> q ;
    while (q--)
    {
        cin >> n >> m >> k ;
        if (n+k<=m) cout << 0 << '\n' ;
        else cout << ceil((n + k - m) / 2) << '\n' ;
    }
    return 0;
}

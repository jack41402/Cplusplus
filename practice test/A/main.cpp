#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , a , ans=0 ;
    cin >> n ;
    for(int i=0 ; i<n ; ++i)
    {
        cin >> a ;
        ans = max(ans , a) ;
    }
    cout << ans << '\n' ;
    return 0;
}

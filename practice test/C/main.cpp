#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , ans ;
    cin >> n ;
    ans = 1000 + n ;
    ans -= ans % 73 ;
    ans /= 73 ;
    cout << ans << '\n' ;
    return 0;
}

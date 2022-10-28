#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a , b , ans ;
    cin >> a >> b ;
    a /= 3 ;
    b /= 2 ;
    ans = min(a , b) ;
    cout << ans << '\n' ;
    return 0;
}

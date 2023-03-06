#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a , b , c , ans=0 ;
    cin >> a >> b >> c ;
    if ((a&1)+(b&1)+(c&1)==2) ans += 6 ;
    if ((a&1)+(b&1)+(c&1)==1) ans += 7 ;
    if ((a&1)+(b&1)+(c&1)==3||(a&1)+(b&1)+(c&1)==0) ans += 15 ;
    if ((a+b+c)-min({a,b,c})>min({a,b,c})) ans += 5 ;
    if ((a+b+c)-max({a,b,c})>max({a,b,c})) ans += 7 ;
    cout << ans << '\n' ;
    return 0;
}

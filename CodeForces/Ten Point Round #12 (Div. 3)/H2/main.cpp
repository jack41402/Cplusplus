#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a , b , c , ans=0 ;
    cin >> a >> b >> c ;
    // 奇數、偶數剛好有兩個必可以達到奇偶連續
    if ((a&1)+(b&1)+(c&1)==2) ans += 6 ;
    if ((a&1)+(b&1)+(c&1)==1) ans += 7 ;
    // 當全為奇數或全為偶數時，必定連續且奇偶互不相鄰
    if ((a&1)+(b&1)+(c&1)==3||(a&1)+(b&1)+(c&1)==0) ans += 15 ;
    // 把最小值放在第二位，比較 a , b , c 的總和減掉最小值後是否大於最小值
    if ((a+b+c)-min({a,b,c})>min({a,b,c})) ans += 5 ;
    // 取 a , b , c 的總和減掉最大值後，比較是否大於最大值
    if ((a+b+c)-max({a,b,c})>max({a,b,c})) ans += 7 ;
    cout << ans << '\n' ;
    return 0;
}
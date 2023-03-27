#include <iostream>
#include <algorithm>

using namespace std;

int a[200005] , b[200005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , g1 , g2 , t ;
    int ans=1e9 , sum=0 , a_total=0 , b_total=0 ;
    cin >> n >> g1 >> g2 >> t ;
    for (int i=0 ; i<n ; ++i) cin >> a[i] ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> b[i] ;
        b_total += b[i] ;
    }
    sort(a , a+n , greater<>()) ;
    sort(b , b+n , greater<>()) ;
    // 第二排餅乾的指針 index，拿了 index 個餅乾
    int index=n ;
    // 第一排餅乾的指針 i，拿了 i 個餅乾
    for (int i=0 ; i<=n ; ++i)
    {
        // 如果當前滿足度 >=t，試著減少在第二排拿的餅乾數量
        while (a_total+b_total>=t && index>=0)
        {
            ans = min(ans , g1*i + g2*index) ;
            if (index-1>=0) b_total -= b[index-1] ;
            index-- ;
        }
        if (i<n) a_total += a[i] ;
    }
    if (ans==1e9) cout << -1 << '\n' ;
    else cout << ans << '\n' ;
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n , U , R , D , L ;
    long long int u , r , d , l ;
    bool flag=false ;
    cin >> t ;
    while (t--)
    {
        cin >> n >> U >> R >> D >> L ;
        flag = false ;
        for (int i=0 ; i<16 ; ++i)
        {
            u = U , r = R , d = D , l = L ;
            // 對四個角落進行枚舉
            if (i&1)
            {
                u-- ;
                l-- ;
            }
            if (i&2)
            {
                u-- ;
                r-- ;
            }
            if (i&4)
            {
                d-- ;
                l-- ;
            }
            if (i&8)
            {
                d-- ;
                r-- ;
            }
            // 當塗色的區域皆小於 n-2，且不小於 0 時，存在一組解
            // max 值要大於等於 2 是為了避免有大於 n-2 的色塊存在，且沒有被枚舉到而設的條件
            // 因為大於 n-2 的色塊會占用到角落的格子，進而影響答案
            // min 值則是避免出現小於 0 的不合理解
            if (max({u , r , d , l})<=n-2 && min({u , r , d , l})>=0)
            {
                flag = true ;
                break ;
            }
        }
        if (flag) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
    return 0;
}

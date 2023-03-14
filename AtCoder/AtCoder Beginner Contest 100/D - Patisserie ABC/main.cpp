#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long int x[1005] , y[1005] , z[1005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , m , sum , ans=0 , total ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i) cin >> x[i] >> y[i] >> z[i] ;
    // x , y , z 的正負組合各有兩種，取 x , y , z 的正負組合為 2^3=8
    // 對正負組合進行枚舉，會使結果趨向極正或極負
    for (int i=-1 ; i<=1 ; i+=2)
    {
        for (int j=-1 ; j<=1 ; j+=2)
        {
            for (int k=-1 ; k<=1 ; k+=2)
            {
                vector<long long int> arr ;
                for (int t=0 ; t<n ; ++t)
                {
                    total = x[t]*i + y[t]*j + z[t]*k ;
                    arr.emplace_back(total) ;
                }
                // 降序排序
                sort(arr.rbegin() , arr.rend()) ;
                // 取陣列中前 m 個元素做 accumulate
                sum = accumulate(arr.begin() , arr.begin()+m , 0LL) ;
                ans = max(ans , sum) ;
            }
        }
    }
    cout << ans << '\n' ;
    return 0;
}

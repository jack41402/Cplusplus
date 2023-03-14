// https://blog.csdn.net/porridgexj/article/details/118312833
#include <iostream>

using namespace std;

long long int arr[100005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n , ans=0 ;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        for (int i=1 ; i<=n ; ++i) cin >> arr[i] ;
        ans = 0 ;
        for (long long int i=1 ; i<=n ; ++i)
        {
            // arr[i]*arr[j] = i + j，移項後得到 j = arr[i]*arr[j] - 1
            // 因此對 arr[j] 進行枚舉，每次 j 增加 arr[i]
            for (long long int j=arr[i]-i ; j<=n ; j+=arr[i])
            {
                if (j<=i) continue ;
                if (arr[i]*arr[j]==i+j) ans++ ;
            }
        }
        cout << ans << '\n' ;
    }
    return 0;
}
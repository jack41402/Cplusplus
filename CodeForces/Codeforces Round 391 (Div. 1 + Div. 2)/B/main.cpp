#include <iostream>

using namespace std;

int arr[100005] , num[100005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , ans=1 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=1 ; j*j<=arr[i] ; ++j)
        {
            if (arr[i]%j!=0) continue ;
            else
            {
                num[j]++ ;
                // 找到對應到 j 的另一個因數
                // j * (arr[i] / j) = arr[i]
                if (j*j!=arr[i]) num[arr[i]/j]++ ;
            }
        }
    }
    for (int i=2 ; i<100000 ; ++i) ans = max(ans , num[i]) ;
    cout << ans << '\n' ;
    return 0;
}

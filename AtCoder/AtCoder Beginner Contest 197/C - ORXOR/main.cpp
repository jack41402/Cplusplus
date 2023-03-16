#include <iostream>

using namespace std;

long long int arr[25] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , ans=2e9 , OR , XOR ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
    // 對於每個元素之間，只有切割與不切割兩種情況，因此枚舉 2^(n-1) 種狀態
    for (int i=0 ; i<(1<<(n-1)) ; ++i)
    {
        OR = 0 , XOR = 0 ;
        for (int j=0 ; j<=n ; ++j)
        {
            if (j<n) OR |= arr[j] ;
            // 當 i 的第 j 個 bit 是 1 ，或是 j==n 時，就進行 XOR 運算並把 OR 歸零
            if (((i>>j)&1) || j==n)
            {
                XOR ^= OR ;
                OR = 0 ;
            }
        }
        ans = min(ans , XOR) ;
    }
    cout << ans << '\n' ;
    return 0;
}

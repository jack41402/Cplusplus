#include <iostream>
#include <numeric>

using namespace std;

int arr[200005] ;
bool prime[200005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , ans=0 , cnt=0 , temp ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        if (temp==1) continue ;
        arr[cnt++] = temp ;
    }
    for (int i=0 ; i<cnt ; ++i)
    {
        for (int j=i+1 ; j<cnt ; ++j)
        {
            ans = max(ans , gcd(arr[i] , arr[j])) ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}
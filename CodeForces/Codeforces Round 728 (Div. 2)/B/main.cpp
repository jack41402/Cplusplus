#include <iostream>

using namespace std;

long long int arr[100005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n , ans ;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        ans = 0 ;
        for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
        for (int i=0 ; i<n ; ++i)
        {
            for (int j=i+1 ; j<n ; ++j)
            {
                if (arr[i]*arr[j]==(i+1)+(j+1)) ans++ ;
            }
        }
        cout << ans << '\n' ;
    }
    return 0;
}

#include <iostream>

using namespace std;

long long int arr[1005] ;

int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;
    int q , n ;
    cin >> q ;
    while (q--)
    {
        long long int ans=0 ;
        cin >> n ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> arr[i] ;
        }
        for (int i=1 ; i<n-1 ; ++i)
        {
            if (arr[i]<arr[i-1] && arr[i]<arr[i+1]) ans++ ;
        }
        cout << ans << '\n' ;
    }
    return 0;
}

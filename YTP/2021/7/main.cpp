#include <iostream>

using namespace std;

int main()
{
    long long int arr[200005] ;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , ans=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> arr[i] ;
    }
    for (int i=0 ; i<n-2 ; ++i)
    {
        for (int j=i+1 ; j<n-1 ; ++j)
        {
            if (arr[j]<=arr[i]) continue;
            for (int k=j+1 ; k<n ; ++k)
            {
                if (arr[j]<=arr[k] || (arr[i]+arr[j]+arr[k])%2!=0) continue;
                if ((arr[j]>arr[i] && arr[j]>arr[k]) && (arr[i]+arr[j]+arr[k])%2==0) ans++ ;
            }
        }
    }
    cout << ans << '\n' ;
    return 0;
}
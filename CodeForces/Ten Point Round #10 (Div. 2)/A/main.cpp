#include <iostream>
#include <algorithm>

using namespace std;

long long int arr[100005]={0} ;

int main()
{
    int n , sum=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> arr[i] ;
    }
    sort(arr , arr+n) ;
    for (int i=n-1 ; i>=3 ; i-=4)
    {
        if (i-3<0) break ;
        int ans = arr[i-3] ;
        sum += ans * ans ;
    }
    cout << sum ;
    return 0;
}

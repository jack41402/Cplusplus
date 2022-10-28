#include <iostream>

using namespace std;

long long int arr[10005] ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , in , out , all=0 , ans=0 ;
    cin >> n ;
    while (n--)
    {
        cin >> in >> out ;
        arr[in]++ ;
        arr[out]-- ;
    }
    for (int i=1 ; i<=10000 ; ++i)
    {
        all += arr[i] ;
        ans = max (ans , all) ;
    }
    cout << ans << '\n' ;
    return 0;
}

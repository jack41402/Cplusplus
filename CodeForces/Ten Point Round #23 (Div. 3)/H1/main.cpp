#include <iostream>

using namespace std;

long long int arr[200005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , q , l , r ;
    cin >> n ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> arr[i] ;
        arr[i] += arr[i-1] ;
    }
    cin >> q ;
    while (q--)
    {
        cin >> l >> r ;
        cout << arr[r]-arr[l-1] << '\n' ;
    }
    return 0;
}

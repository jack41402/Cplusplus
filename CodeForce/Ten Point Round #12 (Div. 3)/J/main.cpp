#include <iostream>

using namespace std;

int arr[]={1 , 3 , 2 , 4} ;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , q , a , b ;
    cin >> n ;
    cin >> q ;
    while (q--)
    {
        cin >> a >> b ;
    }
    for (int i=0 ; i<4 ; ++i)
    {
        for (int j=0 ; j<n ; ++j) cout << arr[i] ;
    }
    cout << '\n' ;
    return 0;
}
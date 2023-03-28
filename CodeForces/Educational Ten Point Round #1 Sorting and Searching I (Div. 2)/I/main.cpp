#include <iostream>

using namespace std;

int arr[10] , b[200005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    for (int &i : arr) cin >> i ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> b[i] ;
    }
    return 0;
}

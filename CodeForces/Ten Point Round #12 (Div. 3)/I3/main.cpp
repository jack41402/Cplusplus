#include <iostream>
#include <algorithm>

using namespace std;

int arr[1005]={0} ;
bool check[100005]={0} ;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool c=false ;
    int n , q , p ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> arr[i] ;
    }

    for (int i=0 ; i<n ; ++i)
    {
        for (int j=0 ; j<n ; ++j)
        {
            if (i==j) continue ;
            check[abs(arr[i]-arr[j])] = true ;
        }
    }
    cin >> q ;
    while (q--)
    {
        cin >> p ;
        if (check[abs(p)]==true) cout << "Yes\n" ;
        else cout << "No\n" ;
    }
    return 0;
}
#include <iostream>

using namespace std;

int arr[1000005][4]={0} , add[1000005]={0} , ans[1000005]={0} ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m , temp ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=0 ; j<4 ; ++j)
        {
            cin >> arr[i][j] ;
        }
        add[arr[i][0]]++ ;
        add[arr[i][2]+1]-- ;
    }
    ans[0] = add[0] ;
    for (int i=1 ; i<1000005 ; ++i)
    {
        ans[i] = ans[i-1] + add[i] ;
    }
    while (m--)
    {
        cin >> temp ;
        cout << ans[temp] << ' ' ;
    }
    cout << '\n' ;
    return 0;
}

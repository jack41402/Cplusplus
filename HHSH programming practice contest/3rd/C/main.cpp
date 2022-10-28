#include <iostream>

using namespace std;

long long int m[200005] , b[200005] ;

int main()
{
    long long int n , x , ans=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> m[i] >> b[i] ;
    }
    cin >> x ;
    for (int i=0 ; i<n ; ++i)
    {
        if (ans<m[i]*x+b[i]) ans = m[i]*x+b[i] ;
    }
    cout << ans << '\n' ;
    return 0;
}

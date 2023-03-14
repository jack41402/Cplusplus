#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , x , p ;
    cin >> t ;
    while (t--)
    {
        cin >> x ;
        bool flag=false ;
        for (long long int a=1 ; a*a*a<x ; ++a)
        {
            p = cbrt(x-a*a*a) ;
            if (p*p*p==x-a*a*a)
            {
                flag = true ;
                break ;
            }
        }
        if (flag) cout << "Yes\n" ;
        else cout << "No\n" ;
    }
    return 0;
}

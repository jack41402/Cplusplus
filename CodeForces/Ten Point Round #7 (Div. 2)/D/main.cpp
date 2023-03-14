#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , dice , ans=0 ;
    cin >> n ;
    for (int i=1 ; i<=6 ; ++i)
    {
        for (int j=1 ; j<=6 ; ++j)
        {
            dice = n - i - j ;
            if (1<=dice && dice<=6) ans++ ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}

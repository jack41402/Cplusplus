#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t , n ;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        if (n<4) cout << "-1\n" ;
        else
        {
            int odd=(n&1) ? n : n-1 ;
            while (odd>=1)
            {
                cout << odd << ' ' ;
                odd -= 2 ;
            }
            cout << 4 << ' ' << 2 << ' ' ;
            int even=6 ;
            while (even<=n)
            {
                cout << even << ' ' ;
                even += 2 ;
            }
            cout << '\n' ;
        }
    }
    return 0;
}

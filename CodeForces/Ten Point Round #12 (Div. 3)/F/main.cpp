#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int a , b , ans=1 ;
    for (int i=0 ; i<4 ; ++i)
    {
        cin >> a >> b ;
        (ans+a>ans*b) ? ans += a : ans *= b ;
    }
    cout << ans << '\n' ;
    return 0;
}
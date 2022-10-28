#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n ;
    while(n--)
    {
        long long int farmer , a , b , c , ans=0 ;
        cin >> farmer ;
        for (int i=0 ; i<farmer ; ++i)
        {
            cin >> a >> b >> c ;
            ans += a*c ;
        }
        cout << ans << '\n' ;
    }
    return 0;
}

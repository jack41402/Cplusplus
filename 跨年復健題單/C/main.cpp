#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , i , j , a , sum , q , ans ;
    cin >> N ;
    for (i=1 ; i<=N ; ++i)
    {
        cin >> q ;
        sum = 0 ;
        for (j=0 ; j<q ; ++j)
        {
            cin >> a ;
            sum += a ;
        }
        if (sum%q==0)
        {
            ans = sum / q ;
        }
        else
        {
            ans = (sum / q) + 1 ;
        }
        cout << ans << endl ;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long int a , money , sum=0 , ans ;
    for (int i=0 ; i<5 ; ++i)
    {
        cin >> a ;
        sum += a ;
    }
    cin >> money ;
    ans = money/sum ;
    if (money%sum==0) cout << ans << '\n' ;
    else cout << ans+1 << '\n' ;
    return 0;
}

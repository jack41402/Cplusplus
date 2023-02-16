#include <iostream>

using namespace std;

int main()
{
    long long int temp=1 , i , N , M , P , ans ;
    cin >> N >> M >> P ;
    for (i=1 ; i<=N ; ++i)
    {
        temp *= i ;
        temp %= P ;
    }
    if (N==0)
    {
        temp = 0 ;
    }
    ans = (((M % P) * (9999999999999 % P) % P) + temp) % P ;
    cout << ans << endl ;
    return 0;
}

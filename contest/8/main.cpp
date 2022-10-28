#include <iostream>

using namespace std;

int main()
{
    long long int n , exp=1 , ans=0 ;
    cin >> n ;
    while (n--)
    {
        exp *= 13 ;
        exp %= 100 ;
        ans = exp ;
        ans /= 10 ;
        ans %= 10 ;
    }
    cout << ans << '\n' ;
    return 0;
}

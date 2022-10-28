#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int n , ans ;
    cin >> n ;
    ans = n*10000 + 2021 ;
    ans *= 2020 ;
    cout << ans << '\n' ;
    return 0;
}

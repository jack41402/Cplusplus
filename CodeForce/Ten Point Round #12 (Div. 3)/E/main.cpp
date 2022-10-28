#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int n ;
    cin >> n ;
    if (n&1) cout << (n-1)/2*3+1 << '\n' ;
    else cout << n/2*3 << '\n' ;
    return 0;
}
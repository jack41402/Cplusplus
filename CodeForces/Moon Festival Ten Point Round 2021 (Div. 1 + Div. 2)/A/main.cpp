#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int q , t ;
    cin >> q ;
    while (q--)
    {
        cin >> t ;
        cout << t*t << '\n' ;
    }

    return 0;
}
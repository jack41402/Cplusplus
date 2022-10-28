#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m , n ;
    cin >> m ;
    while (cin>>n)
    {
        if (n==0) break ;
        (n%m==0) ? cout << n/m << '\n' : cout << m-n%m << '\n' ;
    }
    return 0;
}

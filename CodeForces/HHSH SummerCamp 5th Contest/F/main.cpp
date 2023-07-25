#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int sum=0 ;
    string str ;
    getline(cin , str) ;
    for (auto i : str)
    {
        if ('0'<=i && i<='9') sum += i - '0' ;
    }
    cout << sum << '\n' ;
    return 0;
}

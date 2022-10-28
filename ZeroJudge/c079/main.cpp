#include <iostream>

using namespace std;

int main()
{
    int n , k ;
    while (cin>>n>>k)
    {
        cout << n + n / k + (n / k + n % k) / k << '\n';
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long int n , two=2 , num ;
    cin >> n ;
    while (n--)
    {
        cin >> num ;
        cout << (1<<num) << '\n' ;
    }
    return 0;
}

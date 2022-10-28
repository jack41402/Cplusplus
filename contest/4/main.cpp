#include<iostream>
using namespace std;

int main()
{
    long long int n , prime=2 ;
    cin >> n ;
    cout << n << " = " ;
    while(n>1)
    {
        while(n%prime==0)
        {
            cout << prime ;
            n /= prime ;
            if (n!=1)
            {
                cout << " * " ;
            }
        }
        ++prime ;
    }
    cout << '\n' ;
    return 0;
}
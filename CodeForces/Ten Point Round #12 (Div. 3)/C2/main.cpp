#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int a , b , temp , count=1 ;
    cin >> a >> b ;
    temp = b ;
    while (temp!=0)
    {
        temp /= 10 ;
        count *= 10 ;
    }
    cout << (a*count+b)*1234 << '\n' ;
    return 0;
}
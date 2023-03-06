#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a , b , ans ;
    cin >> a >> b ;
    for (int i=0 ; i<=log10(b) ; ++i) a *= 10 ;
    cout << (a+b)*1234 << '\n' ;
}

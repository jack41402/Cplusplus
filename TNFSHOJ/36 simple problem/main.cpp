#include <iostream>
#include <cmath>

using namespace std;

long long int power(long long int a , long long int b , long long int c)
{
    long long int i , sum ;
    sum = 1 ;
    for (i=1 ; i<=b ; i=i+1)
    {
        sum = sum * a ;
        sum = sum % c ;
    }
    return sum;
}
int main()
{
    long long int a , b , c , d ;
    cin >> a >> b >> c ;
    d = power(a , b , c) ;
    cout << d << endl ;
    return 0;
}

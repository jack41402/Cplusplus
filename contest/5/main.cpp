#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    long long int A , B , a , b , temp ;
    cin >> A >> B ;
    a = A , b = B ;
    while (b)
    {
        cout << a << '%' << b << '=' << a%b << '\n' ;
        temp = a%b ;
        a = b ;
        b = temp ;
    }
    cout << "GCD(" << A << ',' << B << ")=" << a  << '\n' ;
    return 0;
}

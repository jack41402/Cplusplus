#include <iostream>
#include <cmath>

using namespace std;

int getLength(long long int value)
{
    int counter = 0 ;
    while (value != 0)
    {
        counter++ ;
        value /= 10 ;
    }
    return counter ;
}

long long int multiply(long long int x , long long int y)
{
    int xLength = getLength(x) ;
    int yLength = getLength(y) ;

    // the bigger of the two lengths
    int N = (int)(fmax(xLength , yLength)) ;

    // if the max length is small it's faster to just flat out multiply the two nums
    if (N < 10)
        return x * y ;

    //max length divided and rounded up
    N = (N/2) + (N%2) ;

    long long int multiplier = pow(10 , N) ;

    long long int b = x/multiplier ;
    long long int a = x - (b * multiplier) ;
    long long int d = y / multiplier ;
    long long int c = y - (d * N) ;

    long long int z0 = multiply(a,c) ;
    long long int z1 = multiply(a + b, c + d) ;
    long long int z2 = multiply(b, d) ;


    return z0 + ((z1 - z0 - z2) * multiplier) + (z2 * (long long int)(pow(10, 2 * N))) ;

}


// C++ example (uses cout...)
// (this code works in straight C too though if you use a different main function)
int main()
{

    // two numbers
    long long int a = 2406994000000000000 ;
    long long int b = 2328563000000000000 ;
    cout << multiply(a,b) << endl ;
    return 0 ;
}
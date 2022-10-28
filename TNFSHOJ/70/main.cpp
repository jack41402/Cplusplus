#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double r1 , r2 , i1 , i2 , real , complex ;
    char D ;
    cin >> r1 >> i1 >> D >> r2 >> i2 ;
    cout << fixed << setprecision(2) ;
    if (D=='+')
    {
        real = r1 + r2 ;
        complex = i1 + i2 ;
        if (complex>=0)
        {
            cout << real << "+" << complex << "i" << endl ;
        }
        else if (complex<0)
        {
            cout << real << complex << "i" << endl ;
        }
    }
    else if (D=='-')
    {
        real = r1 - r2 ;
        complex = i1 - i2 ;
        if (complex>=0)
        {
            cout << real << "+" << complex << "i" << endl ;
        }
        else if (complex<0)
        {
            cout << real << complex << "i" << endl ;
        }
    }
    else if (D=='*')
    {
        real = r1*r2 - i1*i2 ;
        complex = i1*r2 + r1*i2 ;
        if (complex>=0)
        {
            cout << real << "+" << complex << "i" << endl ;
        }
        else if (complex<0)
        {
            cout << real << complex << "i" << endl ;
        }
    }
    else if (D=='/')
    {
        real = (r1*r2 + i1*i2)/ (pow(r2 , 2) + pow(i2 , 2)) ;
        complex = (i1*r2 - r1*i2)/ (pow(r2 , 2) + pow(i2 , 2)) ;
        if (complex>=0)
        {
            cout << real << "+" << complex << "i" << endl ;
        }
        else if (complex<0)
        {
            cout << real << complex << "i" << endl ;
        }
    }
    return 0;
}

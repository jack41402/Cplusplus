#include <iostream>

using namespace std;

int main()
{
    int i , a , b ;
    b=0 ;
    cin >> i ;
    while (i > 0)
    {
        a=i%10 ;
        i=i/10 ;
        b=b+a ;
    }
    cout << b << endl;
    return 0;
}

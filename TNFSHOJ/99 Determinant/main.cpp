#include <iostream>
#define eps 1e-7

using namespace std;

int main()
{
    long double a , b , c , d ;
    cin >> a >> b >> c >> d ;
//    int ans= ;
    if (((a*d)-(b*c) + eps)!=0)
    {
        cout << "1" << endl ;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}

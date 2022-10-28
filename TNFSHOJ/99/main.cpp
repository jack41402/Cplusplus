#include <iostream>
#define eps 1e-7

using namespace std;

int main()
{
    double a , b , c , d ;
    cin >> a >> b >> c >> d ;
    int ans=((a*d)-(b*c) + eps) ;
    if (ans!=0)
    {
        cout << "1" << endl ;
    }
    else if (ans==0)
    {
        cout << "0" << endl ;
    }
    return 0;
}

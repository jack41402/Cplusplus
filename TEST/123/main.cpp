#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a , b , c , d ;
    int i , N ;
    double aa , bb , cc , dd , ee , D , DD , X ;
    cin >> N ;
    for (i=1 ; i<=N ; ++i)
    {
        cin >> a >> b >> c >> d ;
        aa = (b*c) / (6*pow(a , 2)) ;
        bb = pow(b , 3) / pow(3*a , 3) ;
        cc = d / (2*a) ;
        dd = c / (3*a) ;
        ee = pow(b , 2) / pow(3*a , 2) ;
        D = sqrt(pow(aa-bb-cc , 2) + pow(dd-ee , 3)) ;
        DD = aa-bb-cc ;
        X = -(b/(3*a)) + cbrt(DD + D) + cbrt(DD - D) ;
        cout  <<  fixed << setprecision(3) << X << endl ;
    }
    return 0;
}

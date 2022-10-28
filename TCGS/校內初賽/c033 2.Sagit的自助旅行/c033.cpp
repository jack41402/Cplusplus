#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int AB=1000 , ABC=1500 ;
    int a , b , c , DP ;
    cin >> a >> b >> c ;
    int A1=min(a , 600) ;
    int B1=min(b , 600) ;
    int C1=min(c , 800) ;
    int ABC1=A1 + B1 + C1 ;
    int AB_C=min(ABC1 , AB+C1) ;
    DP = min(AB_C , ABC) ;
    cout << DP << endl ;
    return 0;
}

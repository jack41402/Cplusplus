#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N , i ;
    double C , F , d ;
    cin >> N ;
    for (i=1 ; i<=N ; i++)
    {
        cin >> C >> d ;
        F = (9*C)/5 + 32 ;
        F += d ;
        C = (F-32)*5/9 ;
        cout << "Case " << i << ": " << fixed << setprecision(2) << C << endl ;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

double f(double N)
{
    if (N==1)
    {
        return 1;
    }
    else
    {
        return 1/N + f(N-1);
    }
}

int main()
{
    int N ;
    double ans ;
    cin >> N ;
    ans = f(N) ;
    cout << fixed << setprecision(12) << ans << endl ;
    return 0;
}

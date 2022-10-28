#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A , B ;
    int N ;
    cin >> A >> B >> N ;
    cout << fixed << setprecision(N) ;
    cout << cout.unsetf( ios::fixed ) ;
    cout << A / B << endl ;
    return 0;
}

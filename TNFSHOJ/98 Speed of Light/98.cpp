#include <iostream>

using namespace std;

int main()
{
    long long int c = 299792458;
    cout << "1 Light-second(LS) is " << c << " metres." << endl;
    cout << "1 Light-minute(LM) is " << c*60 << " metres." << endl;
    cout << "1 Light-hour(LH) is " << c*60*60 << " metres." << endl;
    cout << "1 Light-day(LD) is " << c*60*60*24 << " metres." << endl;
    cout << "1 Light-week(LW) is " << c*60*60*24*7 << " metres." << endl;
    cout << "1 Light-year(LY) is " << c*60*60*24*365 << " metres." << endl;
    return 0;
}

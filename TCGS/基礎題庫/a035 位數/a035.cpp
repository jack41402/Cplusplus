#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a , b ;
    cin >> a >> b ;
    cout << static_cast<int>(b*log10(a))+1 << endl;
    return 0;
}

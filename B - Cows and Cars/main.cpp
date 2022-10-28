#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double car , cow , show , door , probability ;
    while (cin >> cow >> car >> show)
    {
        door = cow + car ;
        probability = (1/door)*((car*(door-1))/(door-show-1)) ;
        cout << fixed << setprecision(5) << probability << endl ;
    }
    return 0;
}

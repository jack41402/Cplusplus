#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a , c ;
    char b ;
    cin >> a >> b >> c ;
    if (b=='+')
        cout << fixed << setprecision (4) << a << " + " << c << " = " << a+c << endl;
    else if (b=='-')
        cout << fixed << setprecision (4) << a << " - " << c << " = " << a-c << endl;
    else if (b=='*')
        cout << fixed << setprecision (4) << a << " * " << c << " = " << a*c << endl;
    else if (b=='/'&&c!=0)
        cout << fixed << setprecision (4) << a << " / " << c << " = " << a/c << endl;
    else if (b=='/'&&c==0)
        cout << "ERROR" << endl;
    return 0;
}

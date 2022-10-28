#include <iostream>

using namespace std;

int main()
{
    int a , c ;
    char b ;
    cin >> a >> b >> c ;
    if (b=='+')
        cout << a << " + " << c << " = " << a+c << endl;
    else if (b=='-')
            cout << a << " - " << c << " = " << a-c << endl;
    else if (b=='*')
            cout << a << " * " << c << " = " << a*c << endl;
    else if (b=='/'&&c!=0)
            cout << a << " / " << c << " = " << a/c << " ... " << a%c << endl;
    else if (b=='/'&&c==0)
            cout << "ERROR" << endl;
    return 0;
}

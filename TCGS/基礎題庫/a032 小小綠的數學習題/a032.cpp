#include <iostream>

using namespace std;

int main()
{
    int A , B ;
    char a ;
    cin >> A >> a >> B ;
    if (a=='+')
    {
        cout << A+B << endl;
    }
    else if (a=='-')
    {
        cout << A-B << endl;
    }
    else if (a=='*')
    {
        cout << A*B << endl;
    }
    return 0;
}

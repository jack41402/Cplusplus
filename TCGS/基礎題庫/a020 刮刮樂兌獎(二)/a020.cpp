#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b;
    if (b%3==2&&a%2&&a==b)
        cout << 350 << endl;
    else if (b%3==2&&a%2)
        cout << 300 << endl;
    else if (b%3==2&&a==b)
        cout << 250 << endl;
    else if (b%3==2)
        cout << 200 << endl;
    else if (a%2&&a==b)
        cout << 150 << endl;
    else if (a%2)
        cout << 100 << endl;
    else if (a==b)
        cout << 50 << endl;
    else
        cout << 0 <<endl;
    return 0;
}

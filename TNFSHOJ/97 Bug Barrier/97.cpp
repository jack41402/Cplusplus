#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;
    if (a==1)
    {
        if (b==1)
            cout << "BUG FREE!" << endl;
        else if (b==0)
            cout << "BUG FREE!" << endl;
    }
    else if (a==0)
    {
        if (b==1)
            cout << "BUG FREE!" << endl;
        else if (b==0)
            cout << "BARRIER BREACHED!" << endl;

    }
    return 0;
}

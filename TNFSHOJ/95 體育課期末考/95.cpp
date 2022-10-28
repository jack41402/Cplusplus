#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;
    if (a==1)
        {
            if (b>=8)
                cout << "PASS!" << endl;
            else if (b<8)
                cout << "FAIL! You see see you!" << endl;
        }
    else if (a==2)
        {
            if (b>=9)
                cout << "PASS!" << endl;
            else if (b<9)
                cout << "FAIL! You see see you!" << endl;
        }
    else
        if (b>=10)
            cout << "PASS!" << endl;
        else if (b<10)
            cout << "FAIL! You see see you!" << endl;
    return 0;
}

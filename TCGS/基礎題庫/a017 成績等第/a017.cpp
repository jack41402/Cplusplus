#include <iostream>

using namespace std;

int main()
{
    int N ;
    cin >> N ;
    if (90<=N&&N<=100)
        cout << "A" << endl;
        else
        if (80<=N&&N<90)
            cout << "B" << endl;
        else
        if (70<=N&&N<80)
            cout << "C" << endl;
        else
        if (60<=N&&N<70)
            cout << "D" << endl;
        else
            cout << "E" << endl;
        return 0;
}

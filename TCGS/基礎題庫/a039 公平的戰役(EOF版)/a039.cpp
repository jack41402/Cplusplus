#include <iostream>

using namespace std;

int main()
{
    int  A , B ;
    while( cin >> A >> B)
    {
        if (A>B)
        {
            cout << "A " << A-B << endl;
        }
        else if (A<B)
        {
            cout << "B " << B-A << endl;
        }
        else if (A==B)
        {
            cout << "0" << endl;
        }
        if (cin.fail())
        {
            break;
        }
    }
    return 0;
}

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
        else if (A==B&&A!=0&&B!=0)
        {
            cout << "0" << endl;
        }
        else if (A==0&&B==0)
        {
            break;
        }
    }
    return 0;
}

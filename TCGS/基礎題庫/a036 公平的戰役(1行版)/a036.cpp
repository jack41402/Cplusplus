#include <iostream>

using namespace std;

int main()
{
    int A , B ;
    cin >> A >> B ;
    if (A>B)
    {
        cout << "A " << A-B << endl;
    }
    else if (A<B)
    {
        cout << "B " << B-A << endl;
    }
    else
        cout << "0" << endl;
    return 0;
}

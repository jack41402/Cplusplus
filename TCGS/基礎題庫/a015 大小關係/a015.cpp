#include <iostream>

using namespace std;

int main()
{
    int A , B ;
    cin >> A >> B ;
    if (A==B)
        cout << A << "=" << B << endl;
        else
            if (A<B)
            cout << A<< "<"<<B << endl;
            else
                cout << A << ">" << B << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int N , A , B , i ;
    cin >> N ;
    for (i=1 ; i<=N ; i=i+1)
    {
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
        }
    return 0;
}

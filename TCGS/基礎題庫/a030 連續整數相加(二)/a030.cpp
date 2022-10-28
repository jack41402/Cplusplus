#include <iostream>

using namespace std;

int main()
{
    int a , b , i ;
    cin >> a >> b ;
    if (a<=b)
    {
        for (i=0 ; a<=b ; a=a+1)
        {
            i=i+a;
            cout << a ;
            if (a<b)
            {
                cout << "+" ;
            }
        }
        cout << "=" << i <<endl;
    }
    else
    {
        for (i=0 ; a>=b ; a=a-1)
        {
            i=i+a;
            cout << a ;
            if (a>b)
            {
                cout << "+" ;
            }
        }
        cout << "=" << i <<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a , b , T ;
    cin >> T;
    for (int i=1 ;i <= T;i=i+1)
    {
        cin >> a >> b ;
        while (a!=0&&b!=0)
        {
            if (a>b)
            {
                a=a%b;
            }
            else if (b>a)
            {
                b=b%a;
            }
        }
         if (a==0)
        {
            cout << b << endl;
        }
        else if (b==0)
        {
            cout << a << endl;
        }
    }
    return 0;
}

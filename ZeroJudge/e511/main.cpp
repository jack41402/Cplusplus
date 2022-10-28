#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , temp , maxx=-1 , minn=105 ;
        cin >> n ;
        while (n--)
        {
            cin >> temp ;
            if (temp>maxx) maxx = temp ;
            if (temp<minn) minn = temp ;
        }
        cout << (maxx-minn)*2 << '\n' ;
    }
    return 0;
}

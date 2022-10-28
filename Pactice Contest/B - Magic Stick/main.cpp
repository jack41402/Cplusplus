#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , x , y ;
    cin >> t ;
    while (t--)
    {
        cin >> x >> y ;
        if (x==1 && y>1)
        {
            cout << "NO" << endl ;
        }
        else if ((x==2 || x==3) && y>3)
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
        }
    }
    return 0;
}

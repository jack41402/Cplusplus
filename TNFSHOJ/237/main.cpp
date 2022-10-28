#include <iostream>

using namespace std;

int main()
{
    int x[9] , i , ans ;
    for (i=0 ; i<9 ; i++)
    {
        cin >> x[i] ;
    }
    ans = x[0] + x[1] - x[5] - x[6] ;
    cout << "4 " << ans << endl ;
    return 0;
}

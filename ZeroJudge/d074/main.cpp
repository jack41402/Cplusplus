#include <iostream>

using namespace std;

int main()
{
    int n , temp , ans=-1 ;
    cin >> n ;
    while (n--)
    {
        cin >> temp ;
        if (temp>ans) ans = temp ;
    }
    cout << ans << '\n' ;
    return 0;
}

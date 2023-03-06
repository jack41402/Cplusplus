#include <iostream>

using namespace std;

int main()
{
    int n , temp , ans=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        ans = max(temp , ans) ;
    }
    cout << ans << '\n' ;
    return 0;
}

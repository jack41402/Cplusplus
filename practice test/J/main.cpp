#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , a , c=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> a ;
        if (a>=60) c++ ;
    }
    cout << c << '\n' ;
    return 0;
}

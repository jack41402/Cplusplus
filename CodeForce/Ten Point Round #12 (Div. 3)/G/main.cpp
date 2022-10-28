#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , a , ans , count=1 , current=103 ;
    cin >> n ;
    while (n--)
    {
        cin >> a ;
        if (current>a) current=a , ans=count ;
        count++ ;
    }
    cout << abs(ans-2) << '\n' ;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n , a , b ;
    cin >> n ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> a >> b ;
        (b&1) ? b++ , b /= 2 : b /= 2 ;
        cout << "Case " << i << ": " ;
        (a&1) ? cout << b*b-(a-1)/2*(a-1)/2 << '\n' : cout << b*b-a/2*a/2 << '\n' ;
    }
    return 0;
}
